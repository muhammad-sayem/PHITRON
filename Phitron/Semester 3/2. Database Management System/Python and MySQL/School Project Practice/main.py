import mysql.connector

db_name = "School_Project"

mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password",
    database = db_name
)

# mycursor = mydbconnection.cursor()
# mycursor.execute(sqlquery)

def createTable(tableName):
    sqlquery = f"""
        CREATE TABLE IF NOT EXISTS {tableName}(
            id INT PRIMARY KEY AUTO_INCREMENT,
            name VARCHAR(50) NOT NULL, 
            age INT,
            grade FLOAT

        );
    """

    mycursor = mydbconnection.cursor()
    mycursor.execute(sqlquery)

def addStudent(tableName, name, age, grade):
    sqlquery = f"""
        INSERT INTO {tableName} (name, age, grade)
        VALUES(%s,%s,%s) 
    """

    mycursor = mydbconnection.cursor()
    mycursor.execute(sqlquery, (name, age, grade))
    mydbconnection.commit()
    print("Successfully inserted a new student")
    
def updateGrade(id, newGrdae):
    sqlquery = """
        UPDATE STUDENTS
        SET GRADE = %s
        WHERE ID = %s
    
    """

    mycursor = mydbconnection.cursor()
    mycursor.execute(sqlquery, (newGrade, id))
    mydbconnection.commit()

    print("Updated Grade Successsully!!")


def increaseAge(id, val):
    sqlquery = """
        SELECT AGE FROM STUDENTS
        WHERE ID = %s
    """

    mycursor = mydbconnection.cursor()
    mycursor.execute(sqlquery, (id))
    age = mycursor.fetchone()

    # print(age)
    # print(type(age))
    # print(age[0])

    newAge = age[0] + val

    mycursor.execute("""
                    UPDATE STUDENTS
                    SET AGE = %s
                    WHERE ID = %s
                    """, (newAge, id))
    mydbconnection.commit()
    print("Successfully increased age!!!")



def viewAll():
    sqlquery = f"""
                SELECT * FROM STUDENTS
            """
    mycursor = mydbconnection.cursor()
    mycursor.execute(sqlquery)

    allData = mycursor.fetchall()
    print("+---------------------------------------------------+")
    print("\t\tShow All Students")
    print("+---------------------------------------------------+")
    # print(allData)

    for student in allData:
        id, name, grade, age = student          # Unpacking
        print(f"{id} - {name} - {grade} - {age}")

while True:
    print("""
        1. Create Table
        2. Add Student
        3. Update Grade
        4. Increase Age
        5. Show All Students
        6. Exit
    """)

    op = int(input("Enter your choice: "))

    if op == 1:
        tableName = input("Enter Table Name: ")
        createTable(tableName)
        print("Table created Successfully!!")

    elif op == 2:
        tableName = input("Enter Table Name: ")
        name = input("Enter Name: ")
        age = input("Enter Age: ")
        grade = input("Enter Grade: ")
        addStudent(tableName, name, age, grade)

    elif op == 3:
        id = int(input("Enter Student ID: "))
        newGrade = float(input("Enter New Grade: "))
        updateGrade(id, newGrade)

    elif op == 4:
        id = int(input("Enter Student ID: "))
        val = int(input("Enter Value to Increase: "))
        increaseAge(id, val)

    elif op == 5:
        viewAll()

    elif op == 6:
        break

    else:
        print("Invalid Input!!")

