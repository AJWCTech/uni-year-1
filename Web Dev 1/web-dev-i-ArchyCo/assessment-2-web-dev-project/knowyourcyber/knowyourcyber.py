from flask import Flask, render_template # Importing Flask and render template (Adam Getbags, 2024)
import mysql.connector # Importing mysql.connector driver (w3schools, 2019)
import os

def knowyourcyberDb (): # (Codemy.com, 2021)
    dbconnect = mysql.connector.connect( # Using dbconnect variable to call mysqlconnector driver (w3schools, 2019)
        host="localhost",
        user="Archie",
        password="ArchieCook123123",
        database="knowyourcyber"
    )
    return dbconnect # Return the results of dbconnect

app = Flask(__name__) # Creating Flask application (Flask, 2010)

@app.route("/") # Setting the app route of homepage (GeeksforGeeks, 2021)
def index(): # Defining function index
    return render_template("landing.html") # Return using Flasks render template to return the landing.html page (Dyouri, 2021)

@app.route("/database") # Setting the app route to database (GeeksforGeeks, 2021)
def database(): # Defining function database
    dbconnect = knowyourcyberDb() # Assinging dbconnect variable to have the value of knowyourcyber database connection function
    cursor = dbconnect.cursor(dictionary=True) # Creating a connection cursor to the database with the parameters of dictionary equals true which shows the results as dictionaries i.e keys are column names and values are the data. (Hevo, 2023)
    cursor.execute("SELECT * FROM knowyourcyber.know_your_cyber") # Using SQL execute function to select all from knowyourcyber database (Hevo, 2023)
    threats = cursor.fetchall() # Defining threats variable to store the cursor.fetchall function which retrieves all remaining rows in the last database query (stackoverflow, 2021)
    cursor.close() # Close method to close the cursor object
    dbconnect.close() # Close method to clode the dbconnect object
    return render_template("database.html", threats=threats) # Return using Flasks render template to return the database.html page with the threats variable data being passed to the template (Dyouri, 2021)

@app.route("/about") # Setting the app route to about (GeeksforGeeks, 2021)
def about(): # Defining function about
    return render_template("about.html") # Return using Flasks render template to return the about.html page (Dyouri, 2021)

if __name__ == "__main__": # To check if script is not imported as a module and ran directly
    app.run(debug=True) # Run Flask app in debug mode