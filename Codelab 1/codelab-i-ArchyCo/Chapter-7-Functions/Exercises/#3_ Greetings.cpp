#include <iostream>                  // Preprocessor directive - include iostream file
#include <string>                    // Preprocessor directive - include string file
using namespace std;                 // Declare use of the standard namespace
string greetings(string a, string b) // Declare greetings function as string
{
    string result;         // Declaring string variable result
    result = b + ", " + a; // Assigning value to result
    return result;         // Definition of greetings to return newly formed string
}

int main() // Main function
{
    string userName; // Declare variable to store userName
    string greet;    // Declare variable to store greeting

    cout << "Please enter a name: " << endl; // Console output to ask user for name input
    cin >> userName;                         // Console input to store input

    cout << "Please enter a greeting: " << endl; // Console output to ask user for greeting input
    cin >> greet;                                // Console input to store input

    string greeting = greetings(userName, greet); // Invoke function and assign returned value to string variable
    cout << greeting << endl;                     // Console output greeting

    return 0; // Stop all execution
}
