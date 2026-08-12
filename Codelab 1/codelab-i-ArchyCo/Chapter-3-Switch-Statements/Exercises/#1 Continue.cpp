#include<iostream>//including iostream standard libary
#include<string.h>//including string.h libary
using namespace std;//telling compiler to use namespaces

int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char userAnswer; //variable for user answer;
    cin >> userAnswer;//get user input

    switch (userAnswer) { //evaluate expression
        case 'Y': //case for Y
            cout << "Alright, Continuing Game." << endl; //cout message if user enters Y
            break; //break to end case
        case 'N': //case for N
            cout << "Alright, Exiting Game..." << endl; //cout message if user enters N
            break;
		case 'y': //case for y
            cout << "Alright, Continuing Game." << endl; //cout message if user enters Y
            break; //break to end case
        case 'n': //case for n
            cout << "Alright, Exiting Game..." << endl; //cout message if user enters N
            break;
        default: //default case
            cout << "Invalid input, please try again" << endl; //default message if neither Y or N entered
    }
    return 0;
}
