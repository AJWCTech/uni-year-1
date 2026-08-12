#include<iostream> // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace

int main(){
	int InputNum; // Declaring variable InputNum
	int count = 0; // Declaring variable Count as zero
	while(true){ // While what is in loop is true execute
		cout << "Enter any number other than: " << count << endl; // Console output asking user to enter a number other than count
		cin >> InputNum; // Console input for user to give variable InputNum value
		if(count == InputNum){ // If condition to execute if, count equal to InputNum
			cout << "Hey! you weren't supposed to enter " << count << endl; // Console output to inform user they entered the wrong number
			break; // Break to stop the loop after if condition meet
		}
		else if(count == 9){ // Else If condition to execute if, count equals ten
			cout << "Wow, you're more patient than I am, you win." << endl; // Console output informing user that they won
			break; // Break to stop the loop after if condition meet
		}
		count++; // Ensures that while loop ends
	}
		return 0; // Stop all execution
	}
