# Chapter 3 - Switch Statements

* [The Switch Statement](#the-switch-statement)
  * [The Switch Statement Components](#the-switch-statement-components)
  * [Default Cases](#default-cases)
  * [Grouping Cases Together](#grouping-cases-together)
  * [Why use a switch instead of an IF statement?](#why-use-a-switch-instead=of-an-if-statement)

## The Switch Statement

The switch statement enables variation in a program similar to an IF statement. They are useful when we have so many different options in our IF-ELSE statements that we need a different approach.

The switch statement works by evaluating a singular expression (value). This differs from an IF statement which compares two values. The switch evaluates the given expression against a series of possible cases and executes the code in the matching case.

In pseudocode:

```
switch ( expression ) {
    case 1:
	  do something;
	  break;
    case 2:
	  do something;
	  break;
    default: 	
	  if other cases don't match - do this;
}
```

&nbsp;
&nbsp;

### The switch statement components:

* The expression: This is the variable you are testing against, can be an ```int``` or ```char```
* Case:           What to do for each possible value of the variable tested
* Break:          To show where a case ends
* Default:        The case that executes if no other cases match the variable value

Switch statements offer similar functionality to the if else conditional. The switch statement runs through a series of cases and if one of the cases matches the expression then the code block is executed until a break is reached. The break keyword acts as a termination point for the statement. When encountered the program exits the switch then continues execution after the statement ends (e.g. after the closing curly brace).

Be aware that if a case does not include a break the following case statements will also be executed until a break is reached. This can cause errors in functionality but also be useful in certain situations (as explained later).

A default case can be included that executes runs if none of the previous case match the expression (similar to a terminating ELSE in an IF statement). The default usually does not contain a break as this is the last case encountered and the switch is terminating anyway.

The switch statement is limited in that it can only take a single exact value such as ```int``` and ```char``` values. It cannot take a conditional expression (e.g. x >= 10), or string values.

Take a look at the following examples to see the switch statement in action. The first evaluates a char (note the single quotes wrapping the case values) and the second evaluates an int.

#### Example: Sugar

```C++
cout << “Would you like sugar?” << endl;
char input;
cin >> input;

switch (input) {
    case 'Y':
        cout << "Adding sugar..." << endl;
	   break;
    case 'N':
	   cout << "No sugar requested..." << endl;
	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

#### Example: Menu
```C++
cout << “What would you like to do today?” << endl;
cout << “1: View Balance” << endl;
cout << “2: Widtdraw Money” << endl;
cout << “3: Deposit Money“ << endl;
cout << “4: Exit” << endl;
int userChoice;
cin >> userChoice;

switch (userChoice) {
    case 1:
        cout << “You have £0 sorry!“ << endl;
	   break;
    case 2:
	   cout << “Loading money withdrawl system please wait...“ << endl;
	   break;
     case 3:
 	   cout << “Loading money deposit system please wait...“ << endl;
 	   break;
     case 4:
 	   cout << “Terminating program“ << endl;
 	   break;
    default:
         cout << “That input was not recognised“ << endl;
}
```

&nbsp;
&nbsp;

### Default cases

In the above examples you will notice a default case at the end of the switch statement. This case will run if the expression does not match any of the cases. This is similar to how the ELSE works in an IF ELSE statement. The default is usually placed at the end of the switch statement and therefore does not need to include a break (as we are at the end anyway). The default is optional and only required if you wish to execute code if none of the cases match (e.g. output an error message).

&nbsp;
&nbsp;

### Grouping Cases Together

As mentioned above when a case value matches the switch expression the case statements will be executed until a break is found. If no break is included the switch statement will continue to run the code in subsequent cases until one is found. In certain instances this can lead to errors or unexpected results if the break is accidentally left out. In other instances being able to omit the breaks from cases can be useful.

For example, if multiple options in your switch statement need to execute the same code, rather than duplicating the lines of code you can group cases together by leaving out the break. Let's say we wanted to account for both upper and lower case inputs in our sugar example we can group together the cases for the upper and lower case letters:

```C++
cout << “Would you like sugar?” << endl;
char input;
cin >> input;

switch (input) {
    case 'Y':
    case 'y':
        cout << "Adding sugar..." << endl;
	   break;
    case 'N':
    case 'n':
	   cout << "No sugar requested..." << endl;
	   break;
    default:
         cout << "That input was not recognised" << endl;
}
```

&nbsp;
&nbsp;

### Why use a switch instead of an IF statement?

When you have many options that require checking, the switch statement can provide greater clarity and readability. It can also offer some minor performance improvements compared to a long IF-ELSE statement.

However, as the switch statement can only accept single exact values in the expression there will be instances where you will have to use an IF-ELSE statement (e.g. for evaluating ranges or compound conditions).
