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
            CREATE TABLE STUDENT
            (
                ID VARCHAR(4),
                NAME VARCHAR(50)
            )

            """
mycursor.execute(sqlquery)
print("Create Table Successfully!!")