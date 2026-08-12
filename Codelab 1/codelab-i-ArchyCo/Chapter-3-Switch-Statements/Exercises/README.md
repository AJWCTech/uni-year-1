# Chapter 3 Exercises

Exercises under the heading **Assessment Exercises** must be completed as part of the programming skills portfolio assessment. The assessment exercises contain some **optional** bonus exercises which can be completed for higher marks.

Further exercises are provided for you to practice and develop your programming skills. Completing these exercises is highly encouraged, although they have no impact on the programming skills portfolio mark.

For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

---
&nbsp;

## Assessment Exercises

### 1: Continue? :ballot_box_with_check:

Write a simple program that asks if the user would like to continue playing a game. The program should use a switch statement and accept the values Y (continue) and N (quit). Can you make the program handle both upper and lower case values?

*Use the starter code below to complete this exercise, filling in the gaps to complete the solution*

```C++
#include <iostream>
using namespace std;
int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    ____________ //variable for user answer;
    cin ____________//get user input

    switch (___________) { //evaluate expression
        case 'Y': //case for Y
            ____________ //cout message if user enters Y
            _________ //break to end case
        case ____: //case for N
             ___________ //cout message if user enters N
            break;
        _______: //default case
            ____________ //default message if neither Y or N entered
    }
    return 0;
}
```
```C++
#include<iostream> //including iostream standard libary
using namespace std; //telling compiler to use namespaces

int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char userAnswer; //variable for user answer;
    cin >> userAnswer;//get user input

    switch (userAnswer) { //evaluate expression
        case 'Y': //case for Y
            cout << "Alright, Continuing Game." << endl; //cout message if user enters Y
            break; //break to end case
        case 'N': //case for N
            cout << "Alright, Exiting Game..." << endl; //cout message if user enters N
            break;
	case 'y': //case for Y
            cout << "Alright, Continuing Game." << endl; //cout message if user enters Y
            break; //break to end case
        case 'n': //case for N
            cout << "Alright, Exiting Game..." << endl; //cout message if user enters N
            break;
        default: //default case
            cout << "Invalid input, please try again" << endl; //default message if neither Y or N entered
    }
    return 0;
}

```

&nbsp;
&nbsp;

### 2: Days of the Month :ballot_box_with_check:

You are a freelance calendar maker. Unfortunately, like me, you are useless are remembering how many days there are in each month of the year.

Write a program that uses a switch statement to tell a user how many days there are in a month.

Your cases should test a number corresponding to the months (e.g. 1 = January, 12 = December), and cases should print out how many days there are in a month.
```C++
#include<iostream> //including iostream standard libary
using namespace std; //telling compiler to use namespaces

int main(){
	int year, month; //Declaring variables year and month
	cout << "Enter year: " << endl; //Console output asking user for the current year
	cin >> year; //Console input to assign value to year
	cout << "Enter month (1-12): " << endl; //Console output asking user for the current month
	cin >> month; //Console input to assign value to month
	if(year<=9999 && year>=1100){ //If condition asking if the year is in specified range
			cout << year << ": * No leap years included *" << endl; //Console output for the current year informing user that leap years are not calculated
			switch(month){ //Switch condition
				case 1: //Case 1
					cout << "January,\nDays: 31." << endl; //Console output for case 1, outputting Month and Days in said month
					break; //Break case move to next
				case 2: //Case 2
					cout << "February,\nDays: 28" << endl; //Console output for case 2, outputting Month and Days in said month
					break; //Break case move to next
				case 3: //Case 3
					cout << "March,\nDays: 31" << endl; //Console output for case 3, outputting Month and Days in said month
					break; //Break case move to next
				case 4: //Case 4
					cout << "April,\nDays: 30" << endl; //Console output for case 4, outputting Month and Days in said month
					break; //Break case move to next
				case 5: //Case 5
					cout << "May,\nDays: 31" << endl; //Console output for case 5, outputting Month and Days in said month
					break; //Break case move to next
				case 6: //Case 6
					cout << "June,\nDays: 30" << endl; //Console output for case 6, outputting Month and Days in said month
					break; //Break case move to next
				case 7: //Case 7
					cout << "July,\nDays: 31" << endl; //Console output for case 7, outputting Month and Days in said month
					break; //Break case move to next
				case 8: //Case 8
					cout << "August,\nDays: 31" << endl; //Console output for case 8, outputting Month and Days in said month
					break; //Break case move to next
				case 9: //Case 9
					cout << "September,\nDays: 30" << endl; //Console output for case 9, outputting Month and Days in said month
					break; //Break case move to next
				case 10: //Case 10
					cout << "October,\nDays: 31" << endl; //Console output for case 10, outputting Month and Days in said month
					break; //Break case move to next
				case 11: //Case 11
					cout << "November,\nDays: 30" << endl; //Console output for case 11, outputting Month and Days in said month
					break; //Break case move to next
				case 12: //Case 12
					cout << "December,\nDays: 31" << endl; //Console output for case 12, outputting Month and Days in said month
					break; //Break case move to deafault
				default: //Default for if no case is matched
					cout << "Invalid input please input between months 1-12." << endl;} //Console output for if user inputs invalid case number
		}else{ //Else for if invalid year
		cout << "Please enter a valid year between 1100AC-9999AC."; //Console output for is user inputs invalid year
		return 0;
	}
}
```
&nbsp;
&nbsp;

### Bonus Exercise (Optional): Switch Grade Calculator

Using a switch statement write a program that evaluates a student's mark (0-100) to the respective grade. Grade boundaries are defined below

* Less than 40: F
* Between 40 and 50:  E
* Between 50 and 60:  D
* Between 60 and 70:  C
* Between 70 and 80:  B
* Greater than 80: A

Your program should ask the user to input the student's full name and mark (between 0 - 100) and then output the student's name and grade (A - F). You should also handle invalid grade values.

*Hint:* Remember switch statements in C++ can only take constant whole values - e.g. int’s and char’s. You will need a way of dealing with the numbers between the ranges so they can equal a whole value to use in the switch cases. Think of what the different data types can store.
```C++
#include<iostream> //Including iostream standard libary
using namespace std; //Telling compiler to use namespaces

int main(){
	int marks; //Declaring marks as interger
	char grade; //Declaring grade as character
	cout << "Enter your Test mark (0-100): "; //Console output asking user for their mark
	cin >> marks; //Console input for marks
	if(marks < 0 || marks > 100){ //If condition for data validation making sure user can't input invalid grade
		cout << "Not a valid mark! Please enter mark in range of (0-100)" << endl; //Console output informing user that they inputted a invalid mark
		return 0; //Stop execution
	}
	switch(marks/10){//Find the grade by using a switch case
     case 10: //Case 10 is empty so if user enters above 90 it defaults to case 9.
     case 8: //Case 8 assigning grade to A if user enters mark 80 or above
       grade = 'A'; //Assigning value to grade with char A
       break; //Break move to next case
     case 7: //Case 7 assigning grade to B if user enters mark between 70 and 80
       grade = 'B'; //Assigning value to grade with char B
       break; //Break move to next case
     case 6: //Case 6 assigning grade to C if user enters mark between 60 and 70
       grade = 'C'; //Assigning value to grade with char C
       break; //Break move to next case
     case 5: //Case 5 assigning grade to D if user enters mark between 50 and 60
       grade = 'D'; //Assigning value to grade with char D
       break; //Break move to next case
     case 4: //Case 4 assigning grade to E if user enters mark between 40 and 50
       grade = 'E'; //Assigning value to grade with char E
       break; //Break move to next case
     default: //Default assigning grade to F if user enters mark less than 40
       grade = 'F'; //Assigning value to grade with char F
       }
   	cout << "Your grade is: " << grade << endl; //Console output informing user of what grade they got
		return 0; //Stop execution
}
```
&nbsp;
&nbsp;

## Further Exercises

### A: Fuel me up

Write a program for an automatic fuel filling service. The program should ask the user for the fuel type using a char (e.g. ‘p’ for petrol or ‘d’ for diesel) and the number of litres needed using an int. With this information use a switch statement to display the price of the requested fuel (Petrol costs 1.17 per litre and Diesel costs 1.34 per litre).

The program should be case sensitive to user input, e.g. "P" and "p" are treated equivalently.

*Extension Problem*

Validate the users input and output appropriate error message if incorrect values are entered for fuel type and number of litres.

&nbsp;
&nbsp;

### B: Switching Temperature

You should now have a complete working program that converts a given temperature from Fahrenheit to Celsius and vice versa, depending on which option (integer) the user enters (see previous chapter).

Revise your temperature converter to use a switch statement. The switch should test a char variable holding the characters entered by the user, e.g: Enter "f" to convert from Fahrenheit to Celsius Enter "c" to convert from Celsius to Fahrenheit

You should provide an appropriate default statement.

&nbsp;
&nbsp;
