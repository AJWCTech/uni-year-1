#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
  for(int i = 20; i < 24; i++){ // For loop counting from 20 to 24 by 1
    if(i % 2 == 0){ // If condition used to check if i % (MOD) 2 == 0 is true
      cout << i << " - even." << endl; // Console output stating i is even
    }else{ // Else if i % (MOD) 2 == 0 is false
      cout << i << " - odd." << endl; // Console output stating i is odd
     }
  }
	return 0; // Stop all execution
}
