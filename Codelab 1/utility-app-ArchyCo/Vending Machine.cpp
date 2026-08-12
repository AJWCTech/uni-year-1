#include <windows.h> // Preprocessor directive - include Windows.h file
#include <algorithm> // Preprocessor directive - include algorithm file
#include <iostream>  // Preprocessor directive - include iostream file
#include <sstream>   // Preprocessor directive - include sstream file
#include <string>    // Preprocessor directive - include string file
#include <MMSystem.h>// Preprocessor directive - include MMSystem.h file

#include "VendingMachine.h" // Preporcessor directive - inlcude VendingMachine.h file
#include "configuration.h"  // Preporcessor directive - inlcude configuration.h file
#include "unit.h"           // Preporcessor directive - inlcude unit.h file
using namespace std;        // Declare use of the standard namespace

VendingMachine::VendingMachine()
{                     // Declaring Vending Machine function
	Initialisation(); // Definition of function calling Initialisation function
}

void VendingMachine::Initialisation()
{               // Declaring Initialisation function
	ccount = 1; // Setting ccount to 1
    AddCategory("crisps", "Crisps");          // AddCategory function called to register category crisps
    AddCategory("protein", "Protein Shakes"); // AddCategory function called to register category protein
    AddCategory("drinks", "Drinks");          // AddCategory function called to register category drinks
    AddCategory("choccy", "Chocolate");       // AddCategory function called to register category chocolate

    AddUnit("boost", "Boost", "choccy", 100);         // AddUnit function called to register unit Boost under category choccy
    AddUnit("wispa", "Wispa", "choccy", 100);         // AddUnit function called to register unit Wispa under category choccy
    AddUnit("chrunchie", "Chrunchie", "choccy", 100); // AddUnit function called to register unit Chrunchie under category choccy

    AddUnit("walkers", "Walkers Crisps", "crisps", 100); // AddUnit function called to register unit Walkers under category crisps
    AddUnit("monsterm", "Monster Munch", "crisps", 100); // AddUnit function called to register unit Monster Munch under category crisps
    AddUnit("niknaks", "Nik Naks", "crisps", 100);       // AddUnit function called to register unit Nik Naks under category crisps

    AddUnit("coke", "Coca-Cola", "drinks", 150);    // AddUnit function called to register unit Coca-Cola under category drinks
    AddUnit("sprite", "Sprite", "drinks", 150);     // AddUnit function called to register unit Sprite under category drinks
    AddUnit("asahi", "Asahi", "drinks", 400);       // AddUnit function called to register unit Asahi under category drinks
    AddUnit("corona", "Corona", "drinks", 350);     // AddUnit function called to register unit Corona under category drinks
    AddUnit("bluemoon", "Bluemoon", "drinks", 350); // AddUnit function called to register unit Bluemoon under category drinks

    AddUnit("chocolate", "Chocolate Fudge", "protein", 300);       // AddUnit function called to register unit Chocolate Fudge under category protein
    AddUnit("white chocolate", "White Chocolate", "protein", 300); // AddUnit function called to register unit White Chocolate under category protein
    AddUnit("vanilla", "Vanilla", "protein", 300);                 // AddUnit function called to register unit Vanilla under category protein
    AddUnit("test", "test", "protein", 350);                       // AddUnit function called to register unit test under category drinks to fill blank space

	OutputFullLine(); // OutputFullLine function called to output line of stars in menu
	PrintAllUnits();  // PrintAllUnits function called to output all units
	GetNewLine();     // GetNewLine function called to output newLine

	string title = Menu_Header; // Declaring title as a string and making it call Menu_Header from configuration header file

	GetNewLine(); // GetNewLine function called to output newLine

	OutputLine("List of all units and categories: "); // Calling OutputLine function

	GetNewLine();     // GetNewLine function called to output newLine
	OutputFullLine(); // OutputFullLine function called to output line of stars in menu
    PlayMusic();
	Organiser(); // Organiser function called
}
void VendingMachine::OutputLine(std::string str, bool center)
{                // Declaring OutputLine function
    cout << "*"; // Console Output for "*"

    if (center)
    {                                                       // If condition center then execute
        int spaceBetween = (Menu_Width - str.length()) / 2; // Declaring spaceBetween as (Menu_Width - str.length()) / 2 which takes the menu width - str.length and halves them

        for (int i = 1; i < spaceBetween; i++)
        {                // For loop looping till i is smaller than spaceBetween
            cout << " "; // Console Output for " "
        }

        cout << str; // Console Output for str

        for (int i = 1; i < spaceBetween; i++)
        {                // For loop looping till i is smaller than spaceBetween
            cout << " "; // Console Output for " "
        }
    }
    else
    {                       // Else condition
        cout << " " << str; // Console Output for " " and str

        int spaceAfter = Menu_Width - str.length() - 2; // Declaring spaceAfter as Menu_Width - str.length() - 2 which takes the menu width - str and takes another 2 away

        for (int i = 1; i < spaceAfter; i++)
        {                // For loop looping till i is smaller than spaceAfter
            cout << " "; // Console Output for " "
        }
    }

    cout << "*" << endl; // Console Output for "*"
}

void VendingMachine::Restart()
{                     // Declaring function Restart
    system("CLS");    // System to call to OS command line with "cls" command to clear the screen
    Initialisation(); // Calling Initialisation function after CLS cleared the screen
}

string VendingMachine::BalanceFormat(int pence)
{                                        // Declaring function BalanceFormat
    int pounds = pence / 100;            // Declaring pounds variable as integer with value of pence / 100
    int _pence = pence - (pounds * 100); // Declaring _pence variable as integer with value of pence - (pounds * 100)

    string format = CURRENCY + to_string(pounds) + "." + to_string(_pence); // Declaring format variable as string

    return format; // Return format values
}
void VendingMachine::Organiser()
{                                                      // Declaring Organiser function
    cout << endl;                                      // Console Output for end line
    cout << "Please input the Units ID to order it: "; // Console Output asking user to input ID
    int unitID = getInteger(); // Declaring unitID as integer with value of getInteger function

    while (unit.find(unitID) == unit.end())
    {                                                                     // While loop for data validation
        cout << endl;                                                     // Console Output for end line
        cout << "That is not a valid unit ID, Please input a correct ID"; // Console output informing user that they entered invalid data
        unitID = getInteger();                                            // Reinitializing unitID as getInteger function
    }
    selectUnit(unitID); // Calling selectUnit(unitID) outside loop
}
void VendingMachine::setBalance(int pence)
{                    // Declaring setBalance function
    balance = pence; // Decalring variable balance to have value of pence
}
void VendingMachine::selectUnit(int i)
{                                                                                                                                            // Declaring selectUnit function
    selectedUnit = unit[i];                                                                                                                  // Initialising selectedUnit as unit[i]
    cout << "You choose " << selectedUnit.name << ": You need to deposit " << BalanceFormat(selectedUnit.cost) << " in pence to purchase: "; // Console Output letting user know what they chosen and how much the unit is

    int deposit = getInteger(); // Declaring deposit as integer with value of getInteger function

    while (deposit <= 0)
    {                                                // While loop to loop till deposit greater than 0
        cout << "Please deposit more than 0 pence:"; // Console Output asking user to deposit more than 0
        deposit = getInteger();                      // Declaring deposit as integer with value of getInteger function
    }
    setBalance(deposit); // Calling setBalance function with deposit

    if (CheckBalance())
    {                                                                                                                                     // If condition for CheckBalance
        cout << "The unit you order has been withdrawn and your spare change is: " << BalanceFormat(balance - selectedUnit.cost) << endl; // Console output letting user know their spare change
        cout << "Would you like to order another unit? (Y/N): ";                                                                          // Console output letting user know they have finished using the machine
        char input;                                                                                                                       // Declaring input as character
        cin >> input;                                                                                                                     // Console input inputting input variable
        cout << endl;                                                                                                                     // Console Output end line
        switch (input)
        {                                                   // Switch condition
        case 'Y':                                           // Case 'Y'
            Sleep(50);                                      // Sleep 3000
            Organiser();                                    // Calling Organiser function
            cout << endl;                                   // Console Output end line
            break;                                          // Break
        case 'N':                                           // Case 'N'
            cout << "Thanks for using the vending machine"; // Console Output thanking user for using the machine
            Sleep(2000);                                    // Sleep 3000
            system("CLS");                                  // System fucntion with command CLS to clear screen
            Sleep(5000);                                    // Sleep 5000
            break;                                          // Break
        case 'y':                                           // Case 'y'
            Sleep(50);                                      // Sleep 3000
            Organiser();                                    // Calling Organiser function
            break;                                          // Break
        case 'n':                                           // Case 'n'
            cout << "Thanks for using the vending machine"; // Console Output thanking user for the machine
            Sleep(2000);                                    // Sleep 3000
            system("CLS");                                  // System fucntion with command CLS to clear screen
            Sleep(5000);                                    // Sleep 5000
            break;                                          // Break
        }
    }
}
void VendingMachine::OutputFullLine()
{ // Declaring OutputFullLine function
    for (int i = 0; i < Menu_Width; i++)
    {                // For loop to loop till Menu_Width is less than i
        cout << "*"; // Console Output for "*"
    }

    cout << endl; // Console Output for end line
}

void VendingMachine::GetNewLine()
{                // Declaring GetNewLine function
    cout << "*"; // Console Output for "*"

    for (int i = 2; i < Menu_Width; i++)
    {                // For loop to loop till Menu_Width is less than i
        cout << " "; // Console Output for " "
    }

    cout << "*" << endl; // Console Output for "*"
}

void VendingMachine::AddCategory(string id, string name)
{                        // Declaring AddCategory function
    category[id] = name; // Assigning category[id] as name
}

void VendingMachine::PrintAllUnits()
{ // Declaring PrintAllUnits function
    for (auto it = category.cbegin(); it != category.cend(); it++)
    {                                        // For loop with auto function which specifies that the type of the variable that is being declared will be automatically deducted from its initializer
        OutputLine("- " + it->second + ":"); // OutputLine function with object it and map function second to give the value

        for (int i = 1; i < unit.size(); i++)
        {                                  // For loop to loop till unit.size is less than i
            Unit::UnitData Unit = unit[i]; // Declaring unit[i] inside map class Unit::UnitData
            if (Unit.categoryID == it->first)
            {                                                                                           // If condition, it->first will give the key element of the pair object pointed to by the iterator
                OutputLine("    " + to_string(i) + ") " + Unit.name + ": " + BalanceFormat(Unit.cost)); // OutputLine function called to do some text formatting and output it
            }
        }
    }
}

bool VendingMachine::CheckBalance()
{ // Declaring CheckBalance function
    if (balance < selectedUnit.cost)
    {                                                                                                               // If balance is less than selectedUnit.cost
        cout << "Please deposit " << BalanceFormat(selectedUnit.cost - balance) << " more in pence to purchase this unit: "; // Console output letting user how much more money they need to deposit to order unit
        int deposit = getInteger();                                                                                 // Declaring deposit as integer with value of getInteger function

        setBalance(balance + deposit); // Calling setBalance function

        if (balance < selectedUnit.cost)
        {                                                                     // If balance is less than selectedUnit.cost
            cout << "Wrong amount you need to get your money up sucka, Bye!"; // Console output letting user know they aint got enough bread
            Sleep(5000);                                                         // Sleep function
            Restart();                                                        // Calling Restart function

            return false; // Return false
        }
        return true; // Return true
    }
    return true; // Return true
}
void VendingMachine::AddUnit(string id, string name, string categoryID, int cost)
{ // Declaring AddUnit function
    if (category.find(categoryID) == category.end())
    {                                                                              // If condition
        cout << "Invalid category input please try again: " << categoryID << endl; // Console Output letting user know their category is invalid
        return;                                                                    // Return
    }
    Unit newUnit(id);                // Class Unit
    newUnit.SetCategory(categoryID); // newUnit variable calling SetCategory function
    newUnit.SetName(name);           // newUnit variable calling SetCategory function
    newUnit.SetCost(cost);           // newUnit variable calling SetCategory function

    unit[ccount] = newUnit.FinishUnit(); // Changing unit[ccount] to equal newUnit variable calling FinishUnit
    ccount++;                            // +1 to ccount
}
int VendingMachine::getInteger()
{                      // Declaring getInteger function
    int i_integer;     // Declaring i_integer as integer
    string str_number; // Declaring str_number as string
    while (true)
    {                                     // While true condition
        getline(cin, str_number);         // Getline for string input
        stringstream convert(str_number); // Turns string into stream

        if (convert >> i_integer && !(convert >> str_number))   // If condition
            return i_integer;                                   // Return i_integer
        cin.clear();                                            // cin.clear() clears the error flag on cin (so that future I/O operations will work correctly)
        cerr << "Invalid input must be a integer, Try again: "; // ceer standard output stream for errors
    }
}
void VendingMachine::PlayMusic() { // Declaring PlayMusic function
    bool play = PlaySound(TEXT("Music.wav"), NULL, SND_ASYNC); // Declaring play as boolean with function PlaySound to play sound
}