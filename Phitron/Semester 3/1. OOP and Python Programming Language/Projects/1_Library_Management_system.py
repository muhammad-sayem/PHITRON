class Book:
    def __init__(self, id, name, quantity):
        self.id = id 
        self.name = name 
        self.quantity = quantity

class User:
    def __init__(self, id, name, password):
        self.id = id
        self.name = name
        self.password = password
        self.borrowedBooks = []
        self.returnedBooks = []

class Library:
    def __init__(self, name):
        self.name = name
        self.books = []
        self.users = []

    def addBook(self, id, name, quantity):
        book = Book(id, name, quantity)
        self.books.append(book)
        print(f"{book.name} has been added successfully!\n")

    def addUser(self, id, name, password):
        user = User(id, name, password)
        self.users.append(user)
        return user
    
    def borrowBook(self, user, bookName):
        for book in self.books:
            if book.name == bookName:
                if book in user.borrowedBooks:
                    print("You have already borrowed the book")
                    return
                elif book.quantity == 0:
                    print("Sorry, no copies availabe of the book")
            
                else:
                    user.borrowedBooks.append(book)
                    book.quantity -= 1
                    print("Borrowed book Successfully!\n")
                    return
        
        print(f"Not found any book named {bookName}")
    

    def returnBook(self, user, bookName):
        for book in self.books:
            if book.name == bookName:
                if book in user.borrowedBooks:
                    book.quantity += 1
                    user.returnedBooks.append(book)
                    user.borrowedBooks.remove(book)
                    print("Returned book Successfully!\n")
                
                elif book.quantity == 0:
                    print("Sorry, no copies availabe of the book")
        
        print(f"Not found any book named {bookName}")
    
    
            


bsk = Library("Bisshwo Sahityo Kendro")
admin = bsk.addUser(10001, "admin", "Admin1234")
Sayem = bsk.addUser(187, "Muhammad Sayem", "Sayem1234")
cpBook = bsk.addBook(101, "Computer Programming", 10)

currentUser = admin

while True:
    # When any user is not logged in
    if currentUser is None:
        print("No logged in user\n")

        option = input("Login or Register (L/R) : ")

        if option == 'L':
            id = int(input("Enter ID: "))
            password = input("Enter your password: ")

            match = False
            for user in bsk.users:
                if user.id == id and user.password == password:
                    currentUser = user
                    match = True
                    break
            if match is False:
                print("No user Found!!\n")

        elif option == 'R':
            id = int(input("Enter an ID: "))
            name = input("Enter your name: ")
            password = input("Enter password: ")

            user = bsk.addUser(id, name, password)
            currentUser = user
    
    # When user is logged in
    else:
        print(f"Welcome {currentUser.name}!!\n")

        # If the user is an admin
        if currentUser.name == "admin":

            print("Options: ")

            print("1: Add Book")
            print("2: Add User")
            print("3: Show All Books")
            print("4: Logout")

            choice = int(input("Enter your choice: "))

            if choice == 1:
                id = int(input("Enter Book ID: "))
                name = input("Enter Book Name: ")
                quantity = int(input("Enter Quantity: "))

                bsk.addBook(id, name, quantity)

            elif choice == 3:
                for book in bsk.books:
                    print(book.id,"\t", book.name," ", book.quantity)

            elif choice == 4:
                currentUser = None
            
        # If the user is not an admin
        else:
            print("Options: \n")

            print("1: Borrow Book: ")
            print("2: Return Book: ")
            print("3: Show Borrowed Books: ")
            print("4: Show History: ")
            print("5: Logout")
            
            choice = int(input("Enter your Choice: "))

            if choice == 1:
                name = input("Enter Book Name: ")
                bsk.borrowBook(currentUser, name)

            elif choice == 2:
                name = input("Enter Book Name: ")
                bsk.returnBook(currentUser, name)

            elif choice == 3:
                for book in currentUser.borrowedBooks:
                    print(book.id, "\t", book.name, "\t", book.quantity)
                print("\n")

            elif choice == 4:
                for book in currentUser.returnedBooks:
                    print(book.id, "\t", book.name, "\t", book.quantity)
                print("\n")

            elif choice == 5:
                currentUser = None
