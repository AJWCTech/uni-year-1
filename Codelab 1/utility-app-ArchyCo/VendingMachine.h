#pragma once // Preprocessor directive - # pragma implementing compiler-specific preprocessor instructions

#include "unit.h"    // Preprocessor directive - include unit.h file
#include <iostream>  // Preprocessor directive - include iostream file
#include <string>    // Preprocessor directive - include string file
using namespace std; // Declare use of the standard namespace
class VendingMachine
{                                  // Declaring class Vending Machine
private:                           // Creating private variables for class
    map<string, string> category;  // Using map file are a container to store combination of key value and mapped value for category variable
    map<int, Unit::UnitData> unit; // Using map file are a container to store combination of key value and mapped value for unit variable

    int balance; // Declaring balance as integer
    int ccount;  // Declaring ccount as integer

    Unit::UnitData selectedUnit; // Declaring selectedUnit inside map Unit::UnitData
public:
    VendingMachine();      // Declaring VendingMachine function
    void Initialisation(); // Declaring Initialisation function in header file
    void Organiser();      // Declaring Organiser function in header file
    void Restart();        // Declaring Restart function in header file

    int getInteger();                // Declaring getInteger function in header file
    string BalanceFormat(int pence); // Declaring BalanceFormat function in header file
    bool CheckBalance();             // Declaring CheckBalance function in header file

    void AddCategory(string id, string name);                          // Declaring AddCategory function in header file
    void AddUnit(string id, string name, string categoryID, int cost); // Declaring AddUnit function in header file
    void selectUnit(int i);                                            // Declaring selectUnit function in header file
    void setBalance(int pence);                                        // Declaring setBalance function in header file
    void OutputLine(string str, bool center = false);                  // Declaring OutputLine function in header file
    void GetNewLine();                                                 // Declaring GetNewLine function in header file
    void PrintAllUnits();                                              // Declaring PrintAllUnits function in header file
    void OutputFullLine();                                             // Declaring OutputFullLine function in header file
    void PlayMusic();                                                  // Declaring PlayMusic function in header file
};