#pragma once         // Preprocessor directive - # pragma implementing compiler-specific preprocessor instructions
#include <iostream>  // Preprocessor directive - include iostream file
#include <map>       // Preprocessor directive - include map file
#include <string>    // Preprocessor directive - include string file
using namespace std; // Declare use of the standard namespace
class Unit
{       // Class Unit
public: // Creating private variables for Unit class
    struct UnitData
    {                      // Declaring structure UnitData filled with user defined data types which are used to store group of items of non-similar data types
        string name;       // Declaring variable name as string
        string id;         // Declaring variable id as string
        string categoryID; // Declaring variable categoryID as string
        int cost = 0;      // Declaring variable cost as integer with value of 0
    };

    Unit(string id); // Class Unit to to have members SetName, SetCat, SetCost

    // Function members of class Unit
    void SetName(string name);           // Declaring function SetName
    void SetCategory(string categoryID); // Declaring function SetCategory
    void SetCost(int cost);              // Declaring function SetCost

    UnitData FinishUnit(); // Delcaring FinishUnit

private:                          // Creating private variables for Unit class
    map<int, UnitData> tempUnits; // Declaring tempUnits with map file
};