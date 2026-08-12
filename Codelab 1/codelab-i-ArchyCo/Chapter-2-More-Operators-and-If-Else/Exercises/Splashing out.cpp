#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace

int main() {
    //Declaring variables
    int userMoney;
    int costGame = 25;
    //output to ask how much money user has
    cout << "How much money do you have?: " << endl;
    //input to assign value to userMoney
    cin >> userMoney;
    //if logic to check is userMoney is greater than or equal to 25
    if(userMoney >= 25){
        //output if triggered by if statement
        cout << "You can buy this game" << endl;
        //output & calculation for how much money remaining
        cout << "You have this much money remaining: " << "£" << userMoney - costGame << endl;
    }else{
        //output & calculation for how much money is needed to save for the game
        cout << "I need to save: " << "£" << costGame - userMoney << endl;
    }
    return 0;
}
