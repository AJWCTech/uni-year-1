#include <iostream>  // Including iostream standard libary
using namespace std; // Telling compiler to use namespaces

int main(){
    int marks;  // Declaring marks as interger
    char grade; // Declaring grade as character
retry:          // Label to use goto statement for data validation
    cout << "Enter your Test mark (0-100): "; // Console output asking user for their mark
    cin >> marks;                             // Console input for marks
    if (marks < 0 || marks > 100){            // If condition for data validation making sure user can't input invalid grade
        cout << "Not a valid mark! Please enter mark in range of (0-100)" << endl; // Console output informing user that they inputted a invalid mark
        goto retry:                                                                // GoTo statement provides an unconditional jump from the goto to a labeled statement
    }
    switch (marks / 10)
    {                // Find the grade by using a switch case
    case 10:         // Case 10 is empty so if user enters above 90 it defaults to case 9.
    case 8:          // Case 8 assigning grade to A if user enters mark 80 or above
        grade = 'A'; // Assigning value to grade with char A
        break;       // Break move to next case
    case 7:          // Case 7 assigning grade to B if user enters mark between 70 and 80
        grade = 'B'; // Assigning value to grade with char B
        break;       // Break move to next case
    case 6:          // Case 6 assigning grade to C if user enters mark between 60 and 70
        grade = 'C'; // Assigning value to grade with char C
        break;       // Break move to next case
    case 5:          // Case 5 assigning grade to D if user enters mark between 50 and 60
        grade = 'D'; // Assigning value to grade with char D
        break;       // Break move to next case
    case 4:          // Case 4 assigning grade to E if user enters mark between 40 and 50
        grade = 'E'; // Assigning value to grade with char E
        break;       // Break move to next case
    default:         // Default assigning grade to F if user enters mark less than 40
        grade = 'F'; // Assigning value to grade with char F
    }
    cout << "Your grade is: " << grade << endl; // Console output informing user of what grade they got
    return 0;                                   // Stop execution
}
