# class Book:
#     def __init__(self, id, name, quantity):
#         self.id = id 
#         self.name = name 
#         self.quantity = quantity

# class User:
#     def __init__(self, id, name, password):
#         self.id = id
#         self.name = name
#         self.password = password
#         self.borrowedBooks = []
#         self.returnedBooks = []

# class Library:
#     def __init__(self, name):
#         self.name = name
#         self.books = []
#         self.users = []

#     def addBook(self, bookInfo):
#         self.books.append(bookInfo)

#     def addUser(self, userInfo):
#         self.users.append(userInfo)


# bsk = Library("Bisshwo Sahityo Kendro")

# book1 = Book(1001, "Opekkha", 10)
# book2 = Book(1002, "Shyamol Chaya", 20)

# user1 = User(100001, "Rakib Hasan", 123456)
# user2 = User(100002, "Anik Ahmed", 12345678)

# bsk.addBook(book1)
# bsk.addBook(book2)

# bsk.addUser(user1)
# bsk.addUser(user2)

# for book in bsk.books:
#     print(book.name)
#     print(book.id)

# for user in bsk.users:
#     print(user.name)
#     print(user.password)



# flag = False

# if flag:
#     print("Yes")
# else:
#     print("No")


# --------------------------------------------------------------- #


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
        for book in self.books:
            if book.id == id:
                print(f"\nBook ID {book.id} already exists!\n")
                return
        
        book = Book(id, name, quantity)
        self.books.append(book)
        print(f"\nThe book {book.name} X {quantity} added successfully!\n")

    def addUser(self, id, name, password):
        for user in self.books:
            if user.id == id:
                print(f"\nBook ID {user.id} already exists!\n")
                return
            
        user = User(id, name, password)
        self.addUser.append(user)
        return user

    
    def borrowBook(self, user, token):
        for book in self.books:
            if book.id == token:
                if book in user.borrowedBooks:
                    print("You have already borrowed the book")
                    return
                elif book.quantity == 0:
                    print("Sorry, no copies availabe of the book")
                    return
            
                else:
                    user.borrowedBooks.append(book)
                    book.quantity -= 1
                    print("Borrowed book Successfully!\n")
                    return
        
        print(f"Not found any book with ID: {token}")
    

    def returnBook(self, user, token):
        for book in self.books:
            if book.id == token:
                if book in user.borrowedBooks:
                    book.quantity += 1
                    user.returnedBooks.append(book)
                    user.borrowedBooks.remove(book)
                    print("Returned book Successfully!\n")
                    return
                
                else:
                    print(f"You are not reading {book.name} now")
    
    
        
bsk = Library("Bisshwo Sahityo Kendro")
admin = bsk.addUser(10001, "admin", "Admin1234")
sayem = bsk.addUser(187, "Muhammad Sayem", "Sayem1234")
cpBook = bsk.addBook(101, "Computer Programming", 10)

currentUser = admin
changeOfUser = True

while True:
    # When any user is not logged in
    if currentUser == None:
        print("No logged in user\n")

        option = input("Login or Register (L/R) : ")

        if option == 'L':
            id = int(input("Enter ID: "))
            password = input("Enter your password: ")

            match = False
            for user in bsk.users:
                if user.id == id and user.password == password:
                    currentUser = user
                    changeOfUser = True
                    match = True
                    break
            if match == False:
                print("\nNo user Found!!\n")

        elif option == 'R':
            id = int(input("Enter an ID: "))
            name = input("Enter your name: ")
            password = input("Enter password: ")

            for user in bsk.users:
                if user.id == id:
                    print("\nUser already exists\n")

            user = bsk.addUser(id, name, password)
            currentUser = user
            changeOfUser = True
    
    # When user is logged in
    else:
        if changeOfUser == True:    
            print(f"Welcome {currentUser.name}!!\n")
            changeOfUser = False

        else:
            print("<--------------------------------->")

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

