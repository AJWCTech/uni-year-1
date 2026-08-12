#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace

int main()
{                                                                                                             // Main Function
    int Array[10] = {};                                                                                       // Declaring Array as a integer array variable using shorthand method
    cout << "Program that asks user to fill data into an array with enough space to store 10 values" << endl; // Console output informing user what the program does
    for (int i = 0; i < 10; i++)
    {                                                                      // For loop looping ten times
        cout << "Please enter a number to fill array space " << i << ": "; // Console output asking user to enter a number to fill array space
        cin >> Array[i];                                                   // Console input to fill Array[i] with a numeric value
    }
    cout << "The 10 numbers you entered into the Array are below: " << endl; // Console output letting user know where that the array is outputted below
    for (int i = 0; i < 10; i++)
    {                                     // For loop looping ten times
        cout << "| " << Array[i] << " |"; // Console output outputting the whole Array
    }
    return 0; // Stop execution
}
