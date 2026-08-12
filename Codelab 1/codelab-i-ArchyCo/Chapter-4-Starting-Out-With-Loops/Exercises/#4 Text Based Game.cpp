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
    } while (!eleventhValidMove); // While not eleventhValidMove
    return 0;                     // Stop all execution
}
