#include<iostream> //Including iostream standard libary
using namespace std; //Telling compiler to use namespaces

int main(){
    int num = 108; //Declare and initalise variable
    cout << num << endl; //Console output to output num before while loop starts
    while(num != 9){ //While conditional check to see if num not = 9
      //code to output then decrease number
      num = num - 9; //Re-assinging value of num
      cout << num << endl; //Console output looped sum of num
}
	return 0; //Stop execution
}
