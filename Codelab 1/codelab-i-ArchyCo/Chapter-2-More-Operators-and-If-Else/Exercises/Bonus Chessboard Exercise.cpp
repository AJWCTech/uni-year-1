#include<iostream>//including iostream standard libary
#include<cctype>//including cctype libary
#include<string.h>//including string.h libary
using namespace std;//telling compiler to use namespaces

int main()
{
    //Declaring character array variable & empty one.
	char chess[10], temp;
    //Output to ask user for the position of square they want, starting a new line to make sure user enters correct data type.
	cout << "Enter the position of the square, \nThe First Rows A to H and Columns 1 to 8: ";
    //Input that using the getline() function to accept input from the input stream in multiple lines or a string, until delimiter character is found.
	cin.getline(chess, 10);
    //Assigning value to variable to be used later.
	temp = chess[0];
    //Converting and ensuring variable is a lower case letter.
	temp = tolower(temp);
	chess[0] = temp;
    //If condition to check if chess character array contains characters below
	if (chess[0] == 'a' || chess[0] == 'c' || chess[0] == 'e' || chess[0] == 'g'){
        //If logic met in last if execute this statement
		if (chess[1] == '1' || chess[1] == '3' || chess[1] == '5' || chess[1] == '7')
            //If logic also met in this condition output to console black square
			cout << "Black square" << endl;
		else
            //else output to console whitesquare
			cout << "White square" << endl;
    //else for if condition logic not met        
	}else{
        //else execute if condition
		if (chess[1] == '1' || chess[1] == '3' || chess[1] == '5' || chess[1] == '7')
            //Output to console black square
			cout << "White square" << endl;
		else
            //else output to console black square
			cout << "Black square" << endl;
	}

	return 0;
}