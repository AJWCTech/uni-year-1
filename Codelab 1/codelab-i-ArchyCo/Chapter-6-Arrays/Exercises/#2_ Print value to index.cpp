#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace

int main(){                                                                  // Main Function
    string Vehicles[5] = {"Car", "Train", "Tractor", "Skiff", "Tank"};       // Declaring Vehicles as a string array variable using shorthand method
    cout << Vehicles[3] << endl;                                             // Console output of dimension 3 of Vehicles array
    cout << Vehicles[0] << endl;                                             // Console output of dimension 0 of Vehicles array
    cout << Vehicles[2] << " " << Vehicles[4] << endl;                       // Console output of dimension 2 & 4 of Vehicles array
    cout << Vehicles[0] << " " << Vehicles[3] << " " << Vehicles[1] << endl; // Console output of dimension 0 & 1 & 3 of Vehicles array
    return 0;                                                                // Stop execution
}
