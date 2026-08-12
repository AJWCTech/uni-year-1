#include <iostream>  // Preprocessor directive - include iostream file
#include <string>    // Preprocessor directive - include string file
using namespace std; // Declare use of the standard namespace
int main(){
    int num = 1;        // Declaring int num as 1
    int timesTable = 1; // Declaring int timesTable as 1
    for (int i = 1; i <= 12; ++i)
    { // For loop to loop twelve times
        cout << timesTable << " times table:" << endl << "-------------\n" << endl; // Concatonated console output telling the user what times table is below and adding new lines
        for (int i = 1; i <= 12; ++i)
        {                                                          // Nested for loop to loop twelve times
            cout << num << " * " << i << " = " << num * i << endl; // Concatonated console output telling user the times table
        }
        cout << endl;    // Console output ending line outside of nested loop
        num += 1;        // Add 1 to num 12 times after nested loop
        timesTable += 1; // Add 1 to timesTable 12 times after nested loop
    }
    return 0; // Stop all execution.
}
