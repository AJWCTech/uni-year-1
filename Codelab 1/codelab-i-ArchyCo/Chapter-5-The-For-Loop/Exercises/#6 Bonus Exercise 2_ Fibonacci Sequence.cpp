#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main()
{
    int count, num1 = 0, num2 = 1, num3;                                           // Declaring variables as int
retry:                                                                             // Label to use goto statement for data validation
    cout << "Enter what number you want to count up to as a Fibonacci Sequence: "; // Console output asking user for them to enter number they want count up to as a Fib sequence
    cin >> count;                                                                  // Console input for count
    if (count < 0 || count > 1000){                                                // Data validation making sure the input is not below 0 or above 1000 as if you put 9999999999999999 as the input it will run forever
        cout << "You don't want to sit and wait for it to go on forever please enter a number in the range of (0-1000): " << endl; // Cheeky console output telling user to enter between 0-1000
        goto retry;                                                                                                                // GoTo statement provides an unconditional jump from the goto to a labeled statement
    }
    cout << "Fibonacci series of " << count << " numbers: " << endl; // Console output informing user of how many fib series's it takes to get to count
    for (int i = 0; i <= count; ++i){                                // For loop looping till count is reached
        cout << num1 << ", "; // Console output printing num1
        num3 = num1 + num2;   // Fib number is found by adding up the two numbers before it
        num1 = num2;          // Assigning num1 to equal num2
        num2 = num3;          // Assigning num2 to equal num3
    }
    cout << "\n" << endl;       // Console output
    int a = 0, b = 1, c, d = 0; // Declaring variables as int
    for (int j = 0; j <= count; ++j){                  // For loop looping till count is reached
        cout << a << " + " << b << " = " << c << endl; // Console output enabling user to see how it is calculated.
        a = b;                                         // Assigning a to equal b
        b = c;                                         // Assigning b to equal c
        c = a + b;                                     // Fib number is found by adding up the two numbers before it
    }
    return 0; // Stop all execution
}
