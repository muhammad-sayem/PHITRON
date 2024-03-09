import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password",
    database = db_name
)

mycursor = mydbconnection.cursor()

sqlquery = """
            INSERT INTO STUDENT (ID, NAME)
            VALUES ('101', 'Muhammad Sayem')

            """
mycursor.execute(sqlquery)
mydbconnection.commit()
print("Inserted Successfully!!")