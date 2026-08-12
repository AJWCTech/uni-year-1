#include <algorithm> // Preprocessor directive - include algorithm file
#include <iostream>  // Preprocessor directive - include iostream file
#include <string>    // Preprocessor directive - include string file
using namespace std; // Declare use of the standard namespace

bool max_two(int num, int num2)
{                        // Declaring max_two function
    return (num < num2); // Defining max_two function
}

int main()
{
    int userInput, userInput2; // Declaring integer variables

    cout << "Please enter a number: "; // Console output asking user to enter a num
    cin >> userInput;                  // Console input for userInput
    cout << "Please enter a number: "; // Console output asking user to enter a num
    cin >> userInput2;                 // Console input for userInput2

    cout << "Largest element among numbers, " << userInput << " and " << userInput2 << " is: " << max(userInput, userInput2, max_two) << endl; // Console output concatonated and using Max function to get largest among userInput, userInput2 and the max_two function
    return 0;                                                                                                                                  // Stop all execution
}
