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
                UPDATE STUDENT
                SET NAME = "Muhammad Shahrul Islam Sayem"
                WHERE NAME = "Muhammad Sayem"
            """
mycursor.execute(sqlquery)
mydbconnection.commit()
print("Updated Table Successfully!!")