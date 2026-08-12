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
		return 0; //Stop execution
	}
}
