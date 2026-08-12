#include<iostream> // Preprocessor directive - include iostream file
#include<limits> // Preprocessor directive - include limits file
using namespace std; // Declare use of the standard namespace

int main(){
	int age; // Decalring variable age as integer 
	cout << "Enter Age: "; // Console output asking user for them to input age
	cin >> age; // Console input to assign value to age
	while(age < 0 || age > 120){ //While loop to reject unrealistic ages (e.g. under 0 and over 120)
		cout << "Invalid age, please re-enter your age between 1-120: "; // Console output informing user that they input a invalid age range
		cin >> age; // Console input to re-assign value to age
	}
	while(true){ // While what is in the loop is true execute
	if (cin.fail()){ // If condition for if nothing is entered this will be true  
	    cout << "Invalid age, please re-enter your age: " << endl; // Console output informing user that they input invalid data
            cin.clear(); // Clearing error flag on cin so future I/O operations work correctly
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // .ignore() is being used to clear the invalid data entered with numeric_limits<streamsize>::max() setting the max number of characters to ignore (no limit) and \n acting as a delimiter
            cin >> age; // Console input to re-assign value to age
            continue; // Loop will continue
        }
        // This is for clearing additional invalid data like: 47xyz
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear extra invalid data
        if (cin.gcount() > 1){ // This condition will result in a return higher than 1 if data is not extracted properly
	    cout << "Invalid age, please re-enter your age: " << endl; // Console out put informing user that they input invalid data
            cin >> age; // Console input to re-assign value to age
            continue; // Loop will continue
        }
        break; // Break to stop the loop after conditions meet to go into next console output
    }
    cout << "The age you entered is: " << age << endl; // Console output to inform user of the age they entered
		return 0; // Stop all execution
	}
