#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace

int main() {
    //declaring and assigning value to variables
    bool musicalFriend = true;
    string friendPlays = "guitar";
    //if statement check value of boolean
    if(musicalFriend == true){
        //nested if statement to check if friendPlays is equal to "guitar" or "drums"
        if(friendPlays == "guitar" || "drums"){
            //output what friend plays and that they can join band
            cout << "Your friend plays " << friendPlays << endl;
            cout << "This means your friend can join the band";
        //else for if they play anything else that is not guitar or drums
        }else{
            //output informing that they don't play either required
            cout << "Your friend doesn't play either guitar or drums so can't join our band" << endl;
            }
    //else for boolean if statement
    }else{
        //output for if boolean is false
        cout << "You have no musical friends" << endl;
    }    
    return 0;
}
