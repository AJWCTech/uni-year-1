#include <iostream> // Preprocessor directive - include iostream file
#include <map>      // Preprocessor directive - include map file

#include "unit.h"    // Preprocessor directive - include unit.h file
using namespace std; // Declare use of the standard namespace
int ccount = 1;      // Declaring ccount as integer and value of 1

Unit::Unit(string id)
{ // Class Unit
    UnitData newUnit = {
        // Structure UnitData giving value to newUnit
        id,
    };

    tempUnits[ccount] = newUnit; // tempUnit now has value of newUnit
}

void Unit::SetName(string name)
{                                  // Class function SetName
    tempUnits[ccount].name = name; // Declaring tempUnits.name equal to name
}

void Unit::SetCategory(string categoryID)
{                                              // Class function SetCategory
    tempUnits[ccount].categoryID = categoryID; // Declaring tempUnits.categoryID equal to categoryID
}

void Unit::SetCost(int cost)
{                                  // Class function SetCost
    tempUnits[ccount].cost = cost; // Declaring tempUnits.cost equal to cost
}

Unit::UnitData Unit::FinishUnit()
{                                 // Class function FinishUnit()
    ccount++;                     // +1 to ccount
    return tempUnits[ccount - 1]; // Return tempUnits and - 1 from ccount
}