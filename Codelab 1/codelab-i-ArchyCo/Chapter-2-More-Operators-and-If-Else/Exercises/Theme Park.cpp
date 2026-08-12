#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace

int main() {
    //Declaring fixed variables for logic
    float minHeight = 0.6;
    int minAge = 5;
    //Declaring variables for value to be assigned
    float height;
    int age;
    //outputs and inputs to assign value to height and age
    cout << "How tall are you (M): " << endl;
    cin >> height;
    cout << "How old are you: " << endl;
    cin >> age;
    //Compound if function to calculate if you can ride a ride
    if(height >= minHeight && age >= minAge){
        //output if condition meet
        cout << "You can ride on this theme park ride" << endl;
    }else{
        //output if not meet
        cout << "You cannot ride on this ride" << endl;
    }
    return 0;
}
