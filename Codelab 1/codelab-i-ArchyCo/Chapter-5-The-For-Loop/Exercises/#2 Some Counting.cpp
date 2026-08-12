#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
  // Console output informing user what the program is doing.
  cout << "Program that counts 0-50, 50-0, 30-50 up and down by 1, 50-10 by decrements of 2, and 100-200 up by 5." << endl << "\n";
  for(int i = 0; i < 51; i++){ // For loop declaring int i as 0 and looping till it reaches 50
	cout << i << " "; // Console output outputting 0 to 50 with a space at the end for formatting
   }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for (int j = 50; j >= 0; j--){ // For loop declaring int j as 50 and looping till it reaches 0
    cout << j << " "; // Console output outputting 0 to 50 with a space at the end for formatting
  }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for(int k = 30; k < 51; k++){ // For loop declaring int k as 30 and looping till it reaches 50
	cout << k << " "; // Console output outputting 0 to 50 with a space at the end for formatting
   }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for (int l = 50; l >= 10; l-=2){ // For loop declaring int l as 50 and looping down by 2 till it reaches 10
    cout << l << " "; // Console output outputting 50 to 10 with a space at the end for formatting
  }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for (int m = 100; m <= 200; m+=5){ // For loop declaring int m as 100 and looping up by 5 till it reaches 200
    cout << m << " "; // Console output outputting 100 to 200 with a space at the end for formatting
  }
	return 0; // Stop all execution
}
