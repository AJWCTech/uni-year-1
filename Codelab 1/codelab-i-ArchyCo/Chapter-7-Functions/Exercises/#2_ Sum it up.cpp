#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace

int sum(int, int, int); // Declaring sum function

int main() // Declaring main function
{
    int a, b, c, i;                  // Declaring integer variables a, b, c & i
    cout << "Enter first number: ";  // Console output asking user to enter a number
    cin >> a;                        // Console input for a
    cout << "Enter second number: "; // Console output asking user to enter a number
    cin >> b;                        // Console input for b
    cout << "Enter third number: ";  // Console output asking user to enter a number
    cin >> c;                        // Console input for c

    i = sum(a, b, c);        // Giving i value of sum(a, b, c)
    cout << "Sum is: " << i; // Console output, printing i which calls the function sum

    return 0; // Stop execution
}

int sum(int x, int y, int z) // Definition of sum function
{
    int calc;         // Declaring calc as integer variable
    calc = x + y + z; // Giving calc value to add up 3 numbers
    return calc;      // Return calc value
}
