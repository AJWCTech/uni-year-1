#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
  for (int i = 0; i < 7; i++) {  // Execute the outer loop 7 times  
    for (int j = 0; j < 7; j++) { // Execute inner loop 7 times for every iteration of outerloop
        cout << "*"; // Print 7 stars
    }
    cout << endl; // Console output for adding a new console line after 7 stars are printed
}
	return 0; // Stop all execution
}
