# Chapter 4 Exercises

Exercises under the heading **Assessment Exercises** must be completed as part of the programming skills portfolio assessment. The assessment exercises contain some **optional** bonus exercises which can be completed for higher marks.

Further exercises are provided for you to practice and develop your programming skills. Completing these exercises is highly encouraged, although they have no impact on the programming skills portfolio mark.

For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

---
&nbsp;

## Assessment Exercises

### 1: Reverse 9 times table :ballot_box_with_check:

Write a while loop that prints to console all the values of the 9 times table from 108 down to 9.

```
Expected result:
108
99
90
81
72
63
54
45
36
27
18
9
```

Use the starter code below to complete this exercise, filling in the gaps to complete the solution

```C++
#include <iostream>
using namespace std;

int main(){
    int num = 108; //declare and initalise variable

    while(______){ //while conditional check
        //code to output then decrease number
        __________________________________
        _____________
    }
    return 0;
}
```
```C++
#include<iostream> //Including iostream standard libary
using namespace std; //Telling compiler to use namespaces

int main(){
    int num = 108; //Declare and initalise variable
    cout << num << endl; //Cosnole output to output num before while loop starts
    while(num != 9){ //While conditional check to see if num not = 9
      //code to output then decrease number
      num = num - 9; //Reassinging value of num
      cout << num << endl; //Console output looped sum of num
}
	return 0; //Stop execution
}
```

&nbsp;
&nbsp;

### 2: Are you Gullible? :ballot_box_with_check:

Write a program that continues to asks the user to enter any number other than 5 until the user enters the number 5. If the user enters 5 display the message "Hey! you weren't supposed to enter 5!" and exit the program.

*Extension Problem (Optional)*

* If the user still hasn't entered the number 5 after 10 iterations display the message "Wow, you're more patient than I am, you win." and exit.

* Instead of always asking the user to enter any number other than 5, ask the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1" etc...) The program must still behave accordingly exiting when the user enters the number they were asked not to.
```C++
#include<iostream> // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace

int main(){
	int InputNum; // Declaring variable InputNum
	int count = 0; // Declaring variable Count as zero
	while(true){ // While what is in loop is true execute
		cout << "Enter any number other than: " << count << endl; // Console output asking user to enter a number other than count
		cin >> InputNum; // Console input for user to give variable InputNum value
		if(count == InputNum){ // If condition to execute if, count equal to InputNum
			cout << "Hey! you weren't supposed to enter " << count << endl; // Console output to inform user they entered the wrong number
			break; // Break to stop the loop after if condition meet
		}
		else if(count == 9){ // Else If condition to execute if, count equals ten
			cout << "Wow, you're more patient than I am, you win." << endl; // Console output informing user that they won
			break; // Break to stop the loop after if condition meet
		}
		count++; // Ensures that while loop ends
	}
		return 0; //Stop all execution
	}
```
&nbsp;
&nbsp;

### 3: Age Checker :ballot_box_with_check:

Write a program that asks the user to input their age. If the user enters data of an incorrect type (e.g. a letter) the program should keep asking them for their age until acceptable data is entered. You will find a helpful code snippet in the resources folder of your repository for this exercise (hint: ```cin.fail()```).

*Extension Problem (Optional):*  
Also reject unrealistic ages (e.g. under 0 and over 120).
```C++
#include<iostream> // Preprocessor directive - include iostream file
#include<limits> // Preprocessor directive - include limits file
using namespace std; // Declare use of the standard namespace

int main(){
	int age; // Decalring variable age as integer 
	cout << "Enter Age: "; // Console output asking user for them to input age
	cin >> age; // Console input to assign value to age
	while(age < 0 || age > 120){ //While loop to reject unrealistic ages (e.g. under 0 and over 120)
		cout << "Invalid age, please re-enter your age between 1-120: "; // Console output informing user that they input a invalid age range
		cin >> age; // Console input to re-assign value to age
	}
	while(true){ // While what is in the loop is true execute
	if (cin.fail()){ // If condition for if nothing is entered this will be true  
			cout << "Invalid age, please re-enter your age: " << endl; // Console output informing user that they input invalid data
            cin.clear(); // Clearing error flag on cin so future I/O operations work correctly
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // .ignore() is being used to clear the invalid data entered with numeric_limits<streamsize>::max() setting the max number of characters to ignore (no limit) and \n acting as a delimiter
            cin >> age; // Console input to re-assign value to age
            continue; // Loop will continue
        }
        // This is for clearing additional invalid data like: 47xyz
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear extra invalid data
        if (cin.gcount() > 1){ // This condition will result in a return higher than 1 if data is not extracted properly
		   	cout << "Invalid age, please re-enter your age: " << endl; // Console out put informing user that they input invalid data
            cin >> age; // Console input to re-assign value to age
            continue; // Loop will continue
        }
        break; // Break to stop the loop after conditions meet to go into next console output
    }
    cout << "The age you entered is: " << age << endl; // Console output to inform user of the age they entered
		return 0; // Stop all execution
	}
```
&nbsp;
&nbsp;


### Bonus Exercise (Optional): Text-based Game

Copy & paste the code below for this exercise. This is a treasure search game where the user goes through a series of chambers and must find the treasure that is protected by a dragon.

First, follow the flow of the game. It might look difficult to start with but you will soon make sense of it. Try drawing a block diagram of the game to make it easier for you to understand.

Once you understand the operation of the game extend it so that it includes the following features:

Add one more chamber to the game after the user meets the dragon.
Add more items available for pick up for the user.
Add a control that the user can press and get a report of their inventory.

E.g.
6 (is pressed)
You have: sword, gloves, lamp etc.

Also consider how you might use your own creativity and programming knowledge to improve the code and expand the game further.

```C++
#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to the dragon slay game! You will go through a series of chambers and must slay the dragon!" << endl;
    cout << "Available controls are:\n1: go up\n2: go down\n3: go left\n4: go right\n0: pick up items\n5: to slay the dragon.
    cout <<"You are in a hallway. There is a door to the left of you." << endl;

    int pickup = 0;
    int up = 1;
    int down = 2;
    int left = 3;
    int right = 4;
    int slay = 5;
    string inventoryList = "You have the following items:";

    int userInput;

    bool firstValidMove = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == left) {
            cout << "You go left." << endl;
            firstValidMove = true;
        } else {
            cout << "You can't go that way. Try again." << endl;
        }
    } while (!firstValidMove);

    cout << "You are at a grandiose staircase. There is an ajar armor cabinet with a sword in it. The staircase is blocked going down." << endl;

    bool secondValidMove = false;
    bool hasSword = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == pickup) {
            cout << "You pick up a sword" << endl;
            inventoryList += " sword, ";
            hasSword = true;
        } else if (userInput == up) {
            cout << "You go up." << endl;
            secondValidMove = true;
        }else {
            cout << "You can't do that. Try again." << endl;
        }
    } while (!secondValidMove);

    cout << "At the top of the staircase your way is blocked by a dragon!!!" << endl;

    bool thirdValidMove = false;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == slay) {
            if (hasSword == true) {
                cout << "You use your mighty sword and slay the dragon! You open the door behind the dragon and find the castle treasure!" << endl;
                inventoryList += "treasure, ";
            } else {
                cout << "You use your bare hands to slay the dragon but don't succeed! Try the game again. Perhaps pickup a weapon or two?" << endl;
            }
            thirdValidMove = true;
        }else {
            cout << "Quick! Slay the dragon! Use the slay command (press 5)!" << endl;
        }
    } while (!thirdValidMove);

    bool fourthValidMove = false;

    cout << "You may have the treasure but that's not the end, you hear the screams of the princess in the dungeon " << endl;

    do {
        cout << "What would you like to do?" << endl;
        cin >> userInput;
        if (userInput == down) {
            cout << "You head down the stairs quickly, on your way you pick carefully pick up a bottle of poison" << endl;
            inventoryList += "poison, ";
            fourthValidMove = true;
        }else {
            cout << "You can't do that! Try again." << endl;
        }
    } while (!fourthValidMove);


    cout << "Where could this adventure lead next..." << endl;


    return 0;
}
```
```C++
#include <algorithm> // Preprocessor directive - include algorithm file
#include <iostream>  // Preprocessor directive - include iostream file
#include <string>    // Preprocessor directive - include string file
using namespace std; // Declare use of the standard namespace

int main()
{
    cout << "Welcome to the dragon slay game! You will go through a series of chambers and must slay the dragon!" << endl;                    // Console output informing user of what the game is
    cout << "Available controls are:\n0: pick up items\n1: go up\n2: go down\n3: go left\n4: go right\n5: to slay.\n6: To check inventory\n"; // Console output informing user what the game controls are.
    cout << "You are in a hallway. There is a door to the left of you." << endl;                                                              // Console output informing user that there is a door to the left
    // Declaring variables for controls as intergers
    int pickup = 0;
    int up = 1;
    int down = 2;
    int left = 3;
    int right = 4;
    int slay = 5;
    int checkInv = 6;
    // Declaring inventoryList as a string to get appened to throughout the game.
    string inventoryList = "You have the following items:";

    int userInput;               // Declaring userInput as a interger
    bool firstValidMove = false; // Declaring firstValidMove as false boolean

    do
    {                                                 // Do while loop
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for input
        if (userInput == left)
        {                                   // If condition for when input equals left execute
            cout << "You go left." << endl; // Console output informing user that they went left
            firstValidMove = true;          // Re-assigning value to boolean firstValidMove as true
        }
        else if (userInput == checkInv)
        {                                        // If condition for if user wants to check their inventory
            cout << inventoryList << " None \n"; // Console output informing user of whats currently in their inventory
        }
        else
        {                                                        // Else if nothing else meet execute
            cout << "You can't go that way. Try again." << endl; // Console output informing user they cant go that way.
        }
    } while (!firstValidMove); // While not firstValidMove do

    cout << "You are at a grandiose staircase. There is an ajar armor cabinet with a sword in it. The staircase is blocked going down." << endl; // Console output informing user that they are in a stair case and can pick up items

    bool secondValidMove = false; // Declaring secondValidMove as false Boolean
    bool hasSword = false;        // Declaring hasSword as false Boolean

    do
    {                                                 // Do while loop
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for their input
        if (userInput == pickup)
        {                                          // If condition for when input equals pickup
            cout << "You pick up a sword" << endl; // Console output informing user that they pick up a sword
            inventoryList += " sword, ";           // Appending sword to inventory list
            hasSword = true;                       // Changing boolean hasSword to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else if (userInput == up)
        {                                 // If condition for when input equals up
            cout << "You go up." << endl; // Console output informing user that they went up
            secondValidMove = true;       // Changing boolean secondValidMove to true
        }
        else
        {
            cout << "You can't do that. Try again." << endl; // Console output informing user that they cant go that way
        }
    } while (!secondValidMove); // While not secondValidMove do

    cout << "At the top of the staircase your way is blocked by a dragon!!!" << endl; // Console output informing user that the way is blocked by a dragon

    bool thirdValidMove = false; //  Declaring thridValidMove as false Boolean

    do
    {                                                 // Do while loop
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for their input
        if (userInput == slay)
        { // If condition for when userInput equals slay
            if (hasSword == true)
            {                                                                                                                                       // Nested if condition for if hasSword equals true
                cout << "You use your mighty sword and slay the dragon! You open the door behind the dragon and find the castle treasure!" << endl; // Console output informing user that they slayed a dragon and found the treasure
                inventoryList += "treasure, ";                                                                                                      // Appending treasure to inventoryList
            }
            else if (userInput == checkInv)
            {                          // If condition for if user wants to check their inventory
                cout << inventoryList; // Console output informing user of whats currently in their inventory
            }
            else
            {                                                                                                                                        // Else for nested if
                cout << "You use your bare hands to slay the dragon but don't succeed! Try the game again. Perhaps pickup a weapon or two?" << endl; // Console output informing user that they lost the game as they never picked up the sword
                exit(0);
            }
            thirdValidMove = true; // Changing boolean value to true
        }
        else
        {                                                                              // Else for first if
            cout << "Quick! Slay the dragon! Use the slay command (press 5)!" << endl; // Console output informing user to slay the dragon
        }
    } while (!thirdValidMove); // While not thirdValidMove

    bool fourthValidMove = false;                                                                                             // Declaring fourthValidMove as false boolean
    bool hasPoison = false;                                                                                                   // Declaring hasPoison as false boolean
    cout << "You may have the treasure but that's not the end, you hear the screams of the princess in the dungeon " << endl; // Console output informing user that theres a princess that needs to be saved

    do
    {                                                 // Do while loop
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for their input
        if (userInput == down)
        {                                                                                                                  // If condition for when input equals down
            cout << "You head down the stairs quickly, on your way you pick carefully pick up a bottle of poison" << endl; // Console out put informing user that they went down and picked up some poison
            inventoryList += "poison, ";                                                                                   // Appending poison to inventoryList
            hasPoison = true;                                                                                              // Changing boolean value of hasPoison to true
            fourthValidMove = true;                                                                                        // Changing boolean value of fourthValidMove to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else
        {                                                    // Else for when if condition not met
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
    } while (!fourthValidMove); // While not fourthValidMove

    bool fifthValidMove = false; // Declaring fifthValidMove as false boolean

    cout << "You head down into the dungeon to try and save the princess" << endl; // Console output informing user that they are heading down in attempt to save the princess

    do
    {                                                 // Do while loop
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for their input
        if (userInput == right)
        {                                                                                          // If condition for when input equals right
            cout << "You head right where you see a sleeping guard next to the princesses cell\n"; // Console output informing user where they are going
            fifthValidMove = true;                                                                 // Changing fifthValidMove to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else
        {                                                    // Else for if user doesn't input right
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }

    } while (!fifthValidMove);                                                                    // While not fifthValidMove
    bool sixthValidMove = false;                                                                  // Declaring sixthValidMove as false boolean
    cout << "To free the princess you need to kill the guard without arising suspision " << endl; // Console output informing user that they need to kill the guard

    do
    {
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for their input
        if (userInput == slay)
        { // If condition for when input equals slay
            if (hasPoison == true)
            {                                                                                                                 // Nested if condition for if user has poison
                cout << "You see the guard has a drink next to him and spike his drink with the poison you aquired," << endl; // Console output informing user that they have spiked the guard
                inventoryList.erase(46, 51);                                                                                  // Deleting poison from inventory list.
                hasPoison = false;                                                                                            // Making hasPoison boolean false
                sixthValidMove = true;                                                                                        // Changing sixthValidMove boolean to true
            }
            else if (userInput == checkInv)
            {                          // If condition for if user wants to check their inventory
                cout << inventoryList; // Console output informing user of whats currently in their inventory
            }
        }
        else
        {
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
    } while (!sixthValidMove); // While not sixthValidMove

    bool seventhValidMove = false;                                                                                                  // Declaring seventhValidMove as false boolean
    cout << "You now leave the dungeon to go continue exploring while you wait for the guard to drink his poisoned drink " << endl; // Console output informing user that they have left the dungeon

    do
    {                                                   // Do while loop
        cout << "\nWhat would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                               // Console input asking user for their input
        if (userInput == down)
        {                                                                                                                    // If condition for when input equals down
            cout << "You head further down into the dungeon where you find a full set of chainmail and iron armour" << endl; // Console output informing user that they found more items
            seventhValidMove = true;                                                                                         // Changing seventhValidMove boolean to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else
        {                                                    // Else for if user enteres something other than down
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
    } while (!seventhValidMove); // While not seventhValidMove

    bool eighthValidMove = false;                                                                                    // Declaring eighthValidMove as false boolean
    cout << "You still need to save the princess and there could be more guards! press 0 to pick up armour" << endl; // Console output informing user that they need to pick up armour

    do
    {                                                   // Do while loop
        cout << "\nWhat would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                               // Console input asking user for their input
        if (userInput == pickup)
        {                                                              // If condition for when input equals pickup
            cout << "You equip the chainmail and iron armour" << endl; // Console output informing user they equiped armour
            inventoryList += " armour,";                               // Appending armour to inventoryList
            eighthValidMove = true;                                    // Changing eighthValidMove boolean to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
            if (userInput == up)
            {                                                                                                                                                                                                                // If condition for when input equals up with no pick up
                cout << "You head back up to the dungeon where the princess is with no armour, where there are two other guards awake and they see their dead friend and they kill you for revenge of their friend" << endl; // Console output informing user that they died as they never picked up armour
                cout << "Game Over" << endl;                                                                                                                                                                                 // Console output telling user the game is over
                exit(0);                                                                                                                                                                                                     // Exit and stop execution
            }
        }
        else
        {                                                    // Else for any other inputs
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
    } while (!eighthValidMove);                                                                 // While not eighthValidMove
    bool ninthValidMove = false;                                                                // Declaring ninthValidMove as false boolean
    cout << "You have equiped your armour and need to go back up to save the princess" << endl; // Console output informing user their armour is equiped

    do
    {                                                   // Do while loop
        cout << "\nWhat would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                               // Console input asking user for their input
        if (userInput == up)
        {                                                                                                                         // If condition for when input equals up
            cout << "There are two other awake guards that notice that the other guard is dead they come and attack you" << endl; // Console output informing user that guards are attacking
            ninthValidMove = true;                                                                                                // Changing ninthValidMove boolean to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else
        {
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
    } while (!ninthValidMove);                         // While not ninthValidMove
    bool tenthValidMove = false;                       // Declaring tenthValidMove as false boolean
    cout << "The guards come and attack you!" << endl; // Console output informing user guards are attacking

    do
    {                                                   // Do while loop
        cout << "\nWhat would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                               // Console input asking user for their input
        if (userInput == slay)
        { // If condition for when input equals slay
            if (hasSword == true)
            {                                                                                                                                                                            // Nested if condition for if hasSword equals true
                cout << "You get in a fight with the two guards and chop both of their heads off with your sword and take the keys from their dead corpse to save the princess" << endl; // Console output informing user that they killed the two guards and taken the keys
                inventoryList += " keys";                                                                                                                                                // Appending keys to inventoryList
                tenthValidMove = true;                                                                                                                                                   // Changing tenthValidMove boolean to true
            }
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else
        {                                                    // Else no other condition met execute
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
    } while (!tenthValidMove);                                                                                                        // While not tenthValidMove
    bool eleventhValidMove = false;                                                                                                   // Declaring eleventhValidMove as false boolean
    cout << "You have now saved the princess, slayed the dragon and murdered the guards all you need to do now is escape!!!" << endl; // Console output informing user of what they have done and now need to do.

    do
    {                                                 // Do while loop
        cout << "What would you like to do?" << endl; // Console output asking user what to do
        cin >> userInput;                             // Console input asking user for their input
        if (userInput == up)
        {                                                                                         // If condition for when input equals up
            cout << "Well done you have managed to escape the dungeon with the princess" << endl; // Console output informing user that they managed to escape
            cout << "Mission Accomplished Well Done User";
            // Console output informing user they won
            eleventhValidMove = true; // Changing eleventhValidMove boolean to true
        }
        else if (userInput == checkInv)
        {                          // If condition for if user wants to check their inventory
            cout << inventoryList; // Console output informing user of whats currently in their inventory
        }
        else
        {                                                    // Else no other condition met execute
            cout << "You can't do that! Try again." << endl; // Console output informing user that they can't go that way
        }
        return 0;                 // Stop all execution
    } while (!eleventhValidMove); // While not eleventhValidMove
    return 0;                     // Stop all execution
}
```
&nbsp;
&nbsp;

## Further Exercises

### A: The Pointless Box

You are tasked to make an (almost) useless contraption that tells the user when they have entered either the number 1 or 2 to console.

When the user enters 1 the message “you have entered the number 1” should print to console, and when the user enters 2 the message “you have entered the number 2” should print to console. If the user enters any other number the program should end.  

*Hint:* This can be solved by having two conditions in the while loop. You will also need an if statement within the loop. 	

&nbsp;
&nbsp;

### B: Brute Force Attack

You are an inexperienced hacker trying to find the correct passcode to enter a safe. Write a programme that defines the correct passcode of 246, and allows users to enter passcode attempts until they reach the correct number.

Your programme should use a while loop to allow the user to keep entering passcode attempts until correct, and should use a break statement to exit the loop once the correct pass code is entered.

*Hint:* the condition of your while loop should be true e.g. ```while(true)``` meaning you should break out of it when the user successfully enters the correct passcode.s

&nbsp;
&nbsp;

### C: Brute Force Attack II

Modify the solution to Brute-Force Attack to include a maximum of 5 passcode attempts. Each time the user enters an incorrect passcode, they should be told how many passcode attempts remain. If there are 5 failed passcode attempts the while loop should break and inform the user that the authorities have been alerted!

&nbsp;
&nbsp;

### D: Loopy

A - Starting with the code below, write a program that counts from zero up to a user specified number. For example, if the user enters the number 5, your program should display the numbers: 0, 1, 2, 3, 4, 5. You cannot use an if-statement for this part!

```C++
#include <iostream>
using namespace std;
int main() {
    int myInt;
    int counter;

    return 0;
}
```

B - Now have the program also start counting from a number input by the user.

C - Use an if-else statement to count the number of even and odd numbers between the first and final value, e.g: start = 1 end = 11 Number of even numbers: 5 Number of odd numbers: 6

D - Write a program that counts and displays numbers starting from the user's first value to their second value (as before), and then count downwards again to the initial value. You can only use one while loop.

&nbsp;
&nbsp;

### E: Fuel Extended

Complete the fuel exercise from Chapter 4 ensuring you have used a switch statement and feel free to add other fuel types!

Now extend the program to use a do-while loop that keeps the program running until the user enters a valid fuel type and asks for an appropriate amount of fuel.

&nbsp;
&nbsp;

### F: Sum until fail

Write a program that allows the user to quickly sum a bunch of integers and then displays the result if a digit is not entered. For example:

*User enters in console:*
```
5
6
3
eggs
```

*Program displays:*
```
14
```

Notice that the program ignored "eggs".

&nbsp;
&nbsp;

### G: Prime number

Create a program that gets a number from the user then checks if the number is a prime number

&nbsp;
&nbsp;

### H: Exponent

Use a while loop to find the power of a given number. So, for example, 2 to the power of 4 = 16. In this calculation the number 2 is called the base and the number 4 is called the exponent. Your program should request the base and exponent from the user and compute the result.

&nbsp;
&nbsp;
