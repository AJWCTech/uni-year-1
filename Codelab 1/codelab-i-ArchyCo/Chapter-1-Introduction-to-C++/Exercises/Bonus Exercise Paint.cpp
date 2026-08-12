#include <iostream> // preprocessor directive - include iostream file
#include <string> // preprocessor directive - include string
using namespace std; // declare use of the standard namespace

int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    int length;
    int width;
    int height;
    int door = 20;
    int window = 15;
    // declare double totalSqFt;
    double totalSqFt;
    // declare double paintNeeded;
    double paintNeeded;
    // prompt for and read in the length of the room
    cout << "What is the length of the room?: " << endl;
    cin >> length;
    // prompt for and read in the width of the room
    cout << "What is the width of the room?: " << endl;
    cin >> width;
    // prompt for and read in the height of the room
    cout << "What is the height of the room? " << endl;
    cin >> height;
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    totalSqFt = length * width + height - door - window ;
    // Compute the amount of paint needed
    paintNeeded = totalSqFt / COVERAGE;
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    cout << "The length is: " << length << " The width is: " << width << " The height is: " << height << " he total square feet is: " << totalSqFt << " The gallons of paint requiured are: " << paintNeeded << endl;
    return 0;
}
