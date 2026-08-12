#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace

int main() {
    //declaring variable
    int myAge;
    //outputting question to ask for age input
    cout << "Enter your age: " << endl;
    //input to assign value to variable
    cin >> myAge;
    //if statement checking if age is greather than or equal to 18
    if(myAge >= 18){
        //output for if age is greater than or = to 18
        cout << "You are eligable to vote" << endl;
    //else logic means must be less than 18
    }else{
        cout << "You are too young to vote, try again when you are older!" << endl;
    }

    return 0;
}
