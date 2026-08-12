# Chapter 5 Exercises

Exercises under the heading **Assessment Exercises** must be completed as part of the programming skills portfolio assessment. The assessment exercises contain some **optional** bonus exercises which can be completed for higher marks.

Further exercises are provided for you to practice and develop your programming skills. Completing these exercises is highly encouraged, although they have no impact on the programming skills portfolio mark.

For each exercise you should create a _**new project**_ with the name of the exercise and save it to this exercises folder in your local repository. Once you have completed your solution you should make sure you commit and push your solutions to your remote repository on GitHub. You can commit and push as many changes to your solutions as you wish, only those pushed before the chapter deadlines will be marked for the Programming Skills Portfolio.

---
&nbsp;

### 1: Simple For :ballot_box_with_check:

Fill in the blanks to complete the following code so the for loop runs and outputs "Hello World" to the console 10 times.

```C++
for(int i ___ ; ______; ____){
   ____ << "Hello World" << _____
}

```
```C++
#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
	for(int i = 0; i < 10; i++){ // For loop declaring int i as 0 and looping till it reached 10
		cout << "Hello World" << endl; // Console output outputting Hello world 10 times
   }
	return 0; // Stop all execution
}
```
&nbsp;
&nbsp;

### 2: Some counting :ballot_box_with_check:

Use your newly acquired knowledge of the for loop to complete the following tasks. Print all values to console in each case.

* Write a program that counts up from 0 to 50 in increments of 1.
* Write a program that counts down from 50 to 0 in decrements of 1.
* Write a program that counts up from 30 to 50 in increments of 1.
* Write a program that counts down from 50 to 10 in decrements of 2.
* Write a program that counts up from 100 to 200 in increments of 5.

```C++
#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
  // Console output informing user what the program is doing.
  cout << "Program that counts 0-50, 50-0, 30-50 by 1, 50-10 by decrements of 2, and 100-200 up by 5." << endl << "\n";
  for(int i = 0; i < 51; i++){ // For loop declaring int i as 0 and looping till it reaches 50
	cout << i << " "; // Console output outputting 0 to 50 with a space at the end for formatting
   }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for (int j = 50; j >= 0; j--){ // For loop declaring int j as 50 and looping till it reaches 0
    cout << j << " "; // Console output outputting 0 to 50 with a space at the end for formatting
  }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for(int k = 30; k < 51; k++){ // For loop declaring int k as 30 and looping till it reaches 50
	cout << k << " "; // Console output outputting 0 to 50 with a space at the end for formatting
   }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for (int l = 50; l >= 10; l-=2){ // For loop declaring int l as 50 and looping down by 2 till it reaches 10
    cout << l << " "; // Console output outputting 50 to 10 with a space at the end for formatting
  }
  cout << "\n" << endl; // Console output for newline inbetween the counting loops
  for (int m = 100; m <= 200; m+=5){ // For loop declaring int m as 100 and looping up by 5 till it reaches 200
    cout << m << " "; // Console output outputting 100 to 200 with a space at the end for formatting
  }
	return 0; // Stop all execution
}
```
&nbsp;
&nbsp;

### 3: Odd or Even :ballot_box_with_check:

Using a for loop, write a programme that prints all values between 20 and 24. Then using an if-else statement and the modulus operator, modify your program to add the word “odd” or “even” to each value to show if it is odd or even.

*Expected Output:*
```
20 - even
21 - odd
22 - even
23 - odd
24 - even
```
```C++
#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
  for(int i = 20; i < 24; i++){ // For loop counting from 20 to 24 by 1
    if(i % 2 == 0){ // If statement used to check if i % (MOD) 2 == 0 is true
      cout << i << " - even." << endl; // Console output stating i is even
    }else{ // Else if i % (MOD) 2 == 0 is false
      cout << i << " - odd." << endl; // Console output stating i is odd
     }
  }
	return 0; // Stop all execution
}
```
&nbsp;
&nbsp;

### 4: Seven Stars, Seven Lines :ballot_box_with_check:

Write a program that uses nested for loops to print the following pattern to the console

```
*******
*******
*******
*******
*******
*******
*******
```
```C++
#include<iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
  for (int i = 0; i < 7; i++) {  // Execute the outer loop 7 times  
    for (int j = 0; j < 7; j++) { // Execute inner loop 7 times for every iteration of outerloop
        cout << "*"; // Print 7 stars
    }
    cout << endl; // Console output for adding a new console line after 7 stars are printed
}
	return 0; // Stop all execution
}
```
&nbsp;
&nbsp;

### Bonus Exercise 1 (Optional): Multiplication Tables
Using a nested for loop write a program that outputs the 1 - 12 times table.

*Sample output:*

```
1 times table:
---------------

1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
1 x 4 = 4
1 x 5 = 5
1 x 6 = 6
1 x 7 = 7
1 x 8 = 8
1 x 9 = 9
1 x 10 = 10
1 x 11 = 11
1 x 12 = 12


2 times table:
---------------

2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
2 x 11 = 22
2 x 12 = 24
```
```C++
#include <iostream>  // Preprocessor directive - include iostream file
#include <string>    // Preprocessor directive - include string file
using namespace std; // Declare use of the standard namespace
int main(){
    int num = 1;        // Declaring int num as 1
    int timesTable = 1; // Declaring int timesTable as 1
    for (int i = 1; i <= 12; ++i)
    { // For loop to loop twelve times
        cout << timesTable << " times table:" << endl << "-------------\n" << endl; // Concatonated console output telling the user what times table is below and adding new lines
        for (int i = 1; i <= 12; ++i){                             // Nested for loop to loop twelve times
            cout << num << " * " << i << " = " << num * i << endl; // Concatonated console output telling user the times table
        }
        cout << endl;    // Console output ending line outside of nested loop
        num += 1;        // Add 1 to num 12 times after nested loop
        timesTable += 1; // Add 1 to timesTable 12 times after nested loop
    }
    return 0; // Stop all execution
}
```
&nbsp;
&nbsp;

### Bonus Exercise 2: Fibonacci Sequence

Watch this video for an explanation of the Fibonacci Sequence:
https://www.youtube.com/watch?v=U2L2nJl8kaw

In short, any number in the Fibonacci Sequence can be calculated by adding up the numbers both one place, and two places before it.

```
1, 1, 2, 3, 5, 8, 13….

1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
5 + 8 = 13
```

and so on…

Using a for loop, write a programme that prints all values of the Fibonacci Sequence between 1 and 55.

Expected Result:  
```
1, 1, 2, 3, 5, 8, 13, 21, 34, 55
```
```C++
#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int fibonacci(int);  // Declaring fibonacci variable to use as a recursive function
int main(){
    int num = 11;                           // Declaring num as int with value of 11
    cout << "Fibonacci Sequence: " << endl; // Console output
    for (int i = 0; i < num; i++){          // For loop to loop till num
        cout << fibonacci(i) << ", ";       // Console output fibonacci function
    }
    return 0; // Stop all execution
}
// Recursive function to find fibonacci terms
int fibonacci(int num){
    if (num <= 1){                                        // If num less than or equal to 1 return num
        return num;                                       // Base case
    }else{                                                // General case
        return (fibonacci(num - 1) + fibonacci(num - 2)); // Returning Fibonacci Sequence
    }
}
```
```C++
#include <iostream>  // Preprocessor directive - include iostream file
using namespace std; // Declare use of the standard namespace
int main(){
    int count, num1 = 0, num2 = 1, num3;                                           // Declaring variables as int
retry:                                                                             // Label to use goto statement for data validation
    cout << "Enter what number you want to count up to as a Fibonacci Sequence: "; // Console output asking user for them to enter number they want count up to as a Fib sequence
    cin >> count;                                                                  // Console input for count
    if (count < 0 || count > 1000){                                                // Data validation making sure the input is not below 0 or above 1000 as if you put 9999999999999999 as the input it will run forever
        cout << "You don't want to sit and wait for it to go on forever... Please enter a number in the range of (0-1000): " << endl; // Cheeky console output telling user to enter between 0-1000
        goto retry;                                                                // GoTo statement provides an unconditional jump from the goto to a labeled statement
    }
    cout << "Fibonacci series of " << count << " numbers: " << endl; // Console output informing user of how many fib series's it takes to get to 55
    for (int i = 0; i <= count; ++i)
    {                         // For loop looping till count is reached
        cout << num1 << ", "; // Console output printing num1
        num3 = num1 + num2;   // Fib number is found by adding up the two numbers before it
        num1 = num2;          // Assigning num1 to equal num2
        num2 = num3;          // Assigning num2 to equal num3
    }
    cout << "\n"<< endl;        // Console output
    int a = 0, b = 1, c, d = 0; // Declaring variables as int
    for (int j = 0; j <= count; ++j){                  // For loop looping till count is reached
        cout << a << " + " << b << " = " << c << endl; // Console output enabling user to see how it is calculated.
        a = b;                                         // Assigning a to equal b
        b = c;                                         // Assigning b to equal c
        c = a + b;                                     // Fib number is found by adding up the two numbers before it
    }
    return 0; // Stop all execution
}
```
&nbsp;
&nbsp;

## Further Exercises

### A: Iterate through a word

The following programme uses the at() method to print each individual letter of a string (called myWord) to a new console line.
string myWord = "Joe";
cout << myWord.at(0) << endl;
cout << myWord.at(1) << endl;
cout << myWord.at(2) << endl;

```
Output:

J
o
e
```

Using the at() method in combination with a for loop, rewrite the above program to avoid duplicating cout. Note string character counts start at 0 not 1!

&nbsp;
&nbsp;

### B: Descending Stars, Seven Lines

Write a program that uses nested for loops to print the following pattern to the console

```
*******
******
*****
****
***
**
*
```

&nbsp;
&nbsp;

### C: Rising Stars, Five Lines

Write a program that uses nested for loops to print the following pattern to the console

```
*
**
***
****
*****
```

&nbsp;
&nbsp;

### D: Rising and Falling Stars

Write a program that uses nested for loops to print the following pattern to the console. Note you will need two sets of nested for loops, one after the other, to achieve this pattern.

```
*
**
***
****
*****
****
***
**
*
```

&nbsp;
&nbsp;

### E: Cubes			
Write a program using a for loop to display the cube of the numbers upto an integer entered by the user. Only a single for loop is required for this exercise.

The cube of a number can be calculated by multiplying a number by itself twice (e.g. the cube of 2 is 8 → 2 x 2 x 2).

*Expected output if user enters 5:*

```
Number is : 1 and the cube of 1 is: 1                                  
Number is : 2 and the cube of 2 is: 8                                  
Number is : 3 and the cube of 3 is: 27                                 
Number is : 4 and the cube of 4 is: 64                                 
Number is : 5 and the cube of 5 is: 125
```

&nbsp;
&nbsp;

### F: Find the 9s

Write a program to find the number and sum of all integers between 100 and 200 which are divisible by 9. Only a single for loop is required for this exercise.

&nbsp;
&nbsp;

### G: Reverse it

Write a program that finds the reverse of a number. For example:

```
Input: 12345
Output: 54321
```

&nbsp;
&nbsp;

### H: For Loop Fixer

```C++
int n = 3;
for(int i = 0; i<n ; i--){
    cout << "*";
}
```

Stop this infinite looping by removing or changing just one character so that it prints the asterix.
