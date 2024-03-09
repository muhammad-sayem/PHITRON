import mysql.connector

mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "password"
)

db_name = "School"
mycursor = mydbconnection.cursor()

sqlquery = "CREATE DATABASE " + db_name
mycursor.execute(sqlquery)