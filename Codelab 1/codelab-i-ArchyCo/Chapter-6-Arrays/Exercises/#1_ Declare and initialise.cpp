#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace

int main(){                // Main Function
    char charArray[26];    // Declaring charArray as a character array with 26 elements
    int intArray[10];      // Declaring intArray as a int array with 10 elements
    string stringArray[4]; // Declaring stringArray as a string array with 4 elements
    float floatArray[18];  // Declaring floatArray as a character array with 18 elements

    charArray[0] = 'A'; // Putting character data inside charArray in dimension 0 longhand method
    charArray[1] = 'B'; // Putting character data inside charArray in dimension 1 longhand method
    charArray[2] = 'C'; // Putting character data inside charArray in dimension 2 longhand method

    intArray[0] = 1; // Putting interger data inside intArray in dimension 0 longhand method
    intArray[1] = 2; // Putting interger data inside intArray in dimension 1 longhand method
    intArray[2] = 3; // Putting interger data inside intArray in dimension 2 longhand method
    intArray[3] = 4; // Putting interger data inside intArray in dimension 3 longhand method
    intArray[4] = 5; // Putting interger data inside intArray in dimension 4 longhand method
    intArray[5] = 6; // Putting interger data inside intArray in dimension 5 longhand method
    intArray[6] = 7; // Putting interger data inside intArray in dimension 6 longhand method
    intArray[7] = 8; // Putting interger data inside intArray in dimension 7 longhand method

    stringArray[0] = "Hello"; // Putting string data inside stringArray in dimension 0 longhand method
    stringArray[1] = "Bye";   // Putting string data inside stringArray in dimension 1 longhand method

    floatArray[0] = 1.0; // Storing float data inside floatArray in dimenson 0 longhand method
    floatArray[1] = 2.0; // Storing float data inside floatArray in dimenson 1 longhand method
    floatArray[2] = 3.0; // Storing float data inside floatArray in dimenson 2 longhand method
    floatArray[3] = 4.0; // Storing float data inside floatArray in dimenson 3 longhand method
    floatArray[4] = 5.0; // Storing float data inside floatArray in dimenson 4 longhand method

    floatArray[5] = 10;  // Storing float data inside floatArray in dimenson 5 longhand method
    floatArray[6] = 20;  // Storing float data inside floatArray in dimenson 6 longhand method
    floatArray[7] = 30;  // Storing float data inside floatArray in dimenson 7 longhand method
    floatArray[8] = 40;  // Storing float data inside floatArray in dimenson 8 longhand method
    floatArray[9] = 50;  // Storing float data inside floatArray in dimenson 9 longhand method
    floatArray[10] = 60; // Storing float data inside floatArray in dimenson 10 longhand method

    double doubleArray[] = {5.6, 1.8, 4.34, 7.65}; // Declaring and storing doubleArray variable as double with 4 decimal values short hand method
    string sArray[] = {"", "a", "aa", "aaa"};      // Declaring and storing sArray variable as string with 4 decimal values short hand method
    int iArray[] = {1, 10, 100, 1000, 10000};      // Declaring and storing iArray variable as integer with 5 decimal values short hand method
    bool boolArray[] = {true, false, false, true}; // Declaring and storing boolArray variable as boolean with 4 decimal values short hand method
    //For loops looping through all arrays to print to console to represent the data
    for (int i = 0; i < 3; i++)
    {
        cout << charArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << intArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << stringArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << floatArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << doubleArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << sArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << iArray[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << boolArray[i] << ", ";
    }
    return 0; // Stop all execution
}
