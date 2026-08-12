#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int fibonacci(int);  // Declaring fibonacci variable to use as a recursive function
int main(){
    int num = 11;                           // Declaring num as int with value of 11
    cout << "Fibonacci Sequence: " << endl; // Console output
    for (int i = 0; i < num; i++){          // For loop to loop till num
        cout << fibonacci(i) << ", ";       // Console output fibonacci function
    }
    return 0;                               // Stop all execution
}
// Recursive function to find fibonacci terms
int fibonacci(int num){
    if (num <= 1){                                        // If num less than or equal to 1 return num
        return num;                                       // Base case
    }else{                                                // General case
        return (fibonacci(num - 1) + fibonacci(num - 2)); // Returning Fibonacci Sequence
    }
}
