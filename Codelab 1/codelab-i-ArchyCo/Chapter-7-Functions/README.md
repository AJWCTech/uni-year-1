# Chapter 7 - Functions

* [What is a Function](#what-is-a-function)
* [Function Structure](#function-structure)
* [Writing a Simple Function](#writing-a-simple-function)
* [Invoking Functions](#invoking-functions)
* [Where do we Write Functions](#where-do-we-write-functions)
  * [Declare vs Define](#declare-vs-define)
* [Passing in Values](#passing-in-values)
* [Invoking Functions with Arguments](#invoking-functions-with-arguments)
* [Returning Values from a Function](#returning-values-from-a-function)
* [Variable Scope](#variable-scope)

## What is a Function?

A function is a group of statements that can be bunched together to perform a particular operation. Once created function can be called again and again as needed, thus providing reusable blocks of code.

Say we wanted to perform the following calculation several times in our program (e.g. it might form part of a maths game)

* Take some integer, inputted by the user
* Multiply it by 2
* Add 8
* Print the result to console

It would be inefficient to write the entire calculation each time we needed to use it. Instead we could create a little algorithm or function that can be called each time we need to execute the calculation.

In pseudocode, the function might look like this:

```
myCalculation(pass in the user's number){  	
    Multiply the number by 2
    Add 8
    Print to console
}
```

Don’t worry about the various components for now - we will get to them soon.

&nbsp;
&nbsp;

### We've Seen Functions Before

In CodeLab I we have referred to and used a few functions already. We just may not have realised it. Take a look at the following functions that we use in most workshop sessions:

* the main function: ```int main()```
* ```cin.fail( )``` to carry out simple error checking.
* ```tolower()``` / ```toupper()``` to convert letters

&nbsp;
&nbsp;

## Function Structure

The structure of a function is as follows

```
return_type function_name( parameter list ) {
   //body of the function
}
```

* **Return type:** specifies the type of data the function should return (e.g. int, bool, double, string etc) to the place it is called from. If the function does not return anything void can be used as the return type

* **Function name:** Name of the function, this can be anything but usually we specify a name that relates to the task the function performs. E.g. a function named ```displayMenu``` would be sensible for a function that displays a menu of options to the user.

* **Parameter list:** When calling a function you can pass it some values that the function can then use to perform its task. We define the parameters a function can be passed in the parameter list. Multiple parameters can be specified in a comma separated list. For each one we must specify its data type (e.g. int, double, string etc). Parameters are optional, so they can be left blank.

* **Function body:** The function body is where we include our set of statements that define the functions task.

The elements of the function structure will become clearer in the forthcoming examples.

&nbsp;
&nbsp;

## Writing a Simple Function

Let’s imagine we need to write a function that helps us tune a guitar. We want to know what note each string of the guitar should be tuned to (standard tuning). In this case, it is likely that we will need to print this message a number of times throughout the program.

*Expected console output:*

```
String 6: E
String 5: A
String 4: D
String 3: G
String 2: B
String 1: E
```

Our function will contain 6 ```cout``` statements

```C++
void stringGuide(){
	cout << "String 6: E" << endl;
	cout << "String 5: A" << endl;
	cout << "String 4: D" << endl;
	cout << "String 3: G" << endl;
	cout << "String 2: B" << endl;
	cout << "String 1: E" << endl;
}
```

In this example the structure of our function is as follows

* **Return type:** we specify void as our function doesn’t return a value

* **Function name:** Name of the function, this can be anything but usually we specify a name that relates to the task the function performs. So in this example we use ```stringGuide()```.

* **Parameter list:** When calling a function you can pass it some values that the function can use to perform its task. In this basic example we aren’t passing in any values so we leave this parameter list blank.

* **Function body:** The function body is where we include our set of statements that define the functions task. So here we have 6 output statements in order to get the expected console output

&nbsp;
&nbsp;

## Invoking Functions

Now that we have written a function for printing the note names associated with each guitar string, we need a way of invoking it. Invoking simply means that we tell the function to run. We might also refer to this as calling the function

We do this by writing the function name with ```( )``` next to it. So for our string guide function we’d simply write ```stringGuide();``` in our main function to invoke the function

```C++
int main(){
	stringGuide(); // invoke the function
  return 0;
}
```

&nbsp;
&nbsp;

## Where do we Write Functions?

We need to write functions outside of the``` main()``` function. If you have multiple functions, you should place them underneath one another in a logical order.

The main function needs to know that a function exists before it is called, otherwise it will throw an error. Therefore you should place functions before the program's main function. You can however declare your function then define it later, this can help keep your code organised and keep your main function towards the top.

&nbsp;
&nbsp;

### Declare vs Define

Declaring a function refers to letting the compiler know that a function exists within the program. When declaring a function we let the compiler know the return type, the name of the function and any parameters the function takes when being invoked.

We can then fully define the function later on. Defining a function means we specify the full task the function will perform, so we include the function body with the code statements required for our function to perform its task.

In the ```stringGuide();``` example above we both declared and defined our function at the same time. Below however, is an example of how we might declare our function ahead of the main, then define the function later on.

```C++
void stringGuide(); //function declaration

int main(){
	stringGuide(); //function call
      return 0;
}

void stringGuide(){ //function definition
	cout << "String 6: E" << endl;
	cout << "String 5: A" << endl;
	cout << "String 4: D" << endl;
	cout << "String 3: G" << endl;
	cout << "String 2: B" << endl;
	cout << "String 1: E" << endl;
}
```

&nbsp;
&nbsp;

## Passing in Values

To really make use of functions, we need to pass values into them. Remember our earlier ```myCalculation()``` example. For this function to perform its task we wanted to pass in a number to perform the calculation on. We can specify the values that a function can take within the parentheses of the function declaration. These are known as the function parameters. These can be named anything you like as long as it’s meaningful.

```C++
void myCalculation(int num){ //function with parameters
	num *= 2;
	num += 8;
	cout << num << endl;
}
```

Note that you have to declare parameters with an appropriate data type (in this example an ```int```). You can pass as many parameters into your function as you like. Each must be delineated (separated) by a comma.

&nbsp;
&nbsp;

## Invoking Functions with Arguments

When invoking functions with parameters we can pass in the required data in the parentheses of the function call. With our ```myCalculation()``` example below the user is asked to enter a number which is then assign to a variable called ```userNum```. When invoking the ```myCalculation()``` function this ```userNum``` variable is passed to the function within the parentheses of the function invocation. This number then gets *copied* into the ```num``` variable specified in the functions parameter list and is used within the function body to perform the calculation.

```C++
void myCalculation(int num){ //function with parameters
	num *= 2;
	num += 8;
	cout << num << endl;
}
int main() {
    int userNum; // create integer variable
    cout << "Enter A Number: "; // ask user to enter a number
    cin >> userNum; //assign users input to our num variable
    myCalculation(userNum); //invoke the function and pass in userNum     
    return 0;
}
```

In this second example we have a function that multiplies two numbers and outputs the result. To do this It uses two numbers that are passed in as the function parameters (note the two integers specified in the function declaration). When invoking this function from the main program two numbers must be passed when invoking the function. These numbers get copied to the the variables in the functions parameter list to be used within the functions body.

```C++
void multiply(int num1, int num2){
	int total = num1 * num2; // use passed in parameters
	cout << total << endl; // output the multiplication result
}

int main() {
    multiply(12, 16); //call the function and pass in two numbers
    return 0;
}
```

&nbsp;
&nbsp;

## Returning values from a function

When invoking functions, we may want to return a value back to where it is invoked from. We return values if we want to do something with the returned value.

Let’s first of all start with a really simple example. This function returns the current year to the main() function and prints it to console from there:  

```C++
int getYear(){
    int currentYear = 2022;
    return currentYear; // function returns 2022
}

int main() {
    int returnedValue = getYear(); // invoke getYear function
    cout << returnedValue; //output the returned value   
    return 0;
}
```

There are few things to note here:

* ```void``` has been replaced by ```int``` in the ```getYear()``` function. Remember this component of a function is called the return type. When we don’t return a value from a function we use ```void```, however in this example we want to return an integer, so we replace ```void``` with ```int```.

* The returned value is stored as an integer called ```returnedValue```. As normal, we need to declare this variable. You can see that ```getYear()``` is essentially replaced by the value returned by the function - so ```getYear()``` becomes 2016.

If we didn't need to store the returned value and just needed to output it to the console we could negate the need for the ```returnedValue``` variable and invoke the function directly within an output statement...

```C++
int getYear(){
    int currentYear = 2022;
    return currentYear; // function returns 2022
}

int main() {
    cout << getYear() << endl; //call the function within output statement to print the returned value   
    return 0;
}
```

&nbsp;
&nbsp;

### A More Complex Example

In this more complex example we have a function that sums the price of two items. The items have the prices: 25.99, 11.50.

We store the price of the two items as double variables called ```shoes``` and ```tshirt```.

The function returns the total value of the items to the ```main()``` function. The main function then compares the total to the amount of money we have - 40.00 stored in the variable ```myMoney``` - and then prints whether we can afford to buy the items or not.

```C++
double sumItems(double item1, double item2); //declare function

int main(){
   double myMoney = 40.00;
   double shoes = 25.99;
   double tshirt = 11.50;

   double returnedTotal = sumItems(shoes, tshirt);//invoke function and pass in values

   if (returnedTotal <= myMoney){ //determine whether can afford items
       cout << "you can afford these items" << endl;
   } else {
       cout << "keep saving up" << endl;
   }
}

double sumItems(double item1, double item2){ //define function
   double total = item1 + item2; //calculate cost of items
   return total; //return total cost back to main program
}
```

Observe here that the return type of the function is a double. Also note that the total returned from the function ```sumItems()``` is stored in the variable ```returnedTotal``` which is then compared to ```myMoney``` in the if statement.

&nbsp;
&nbsp;

## Variable Scope

Not a programming technique itself, but an important concept to understand; scope relates to the visibility of the variables we declare in our programs. Where variables are declared influences which parts of the program can then access said variables. There are two types of scope:

* Local - declared inside a block of code { } and only accessible to that block (and any nested blocks).
* Global - declared outside the main function and accessible to the entire program.

Scope visibility is why we can have two variables of the same name declared in seperate functions without causing errors in the program as the two variables exist in different scopes and are only accessible where they are declared. This doesn't just apply to functions but variables declared in any scope (e.g. within a if statement or loop).

The example below illustrates this in a program which has two variables called ```n1```. Yet, as these are declared in different functions (therefore within different scopes) the variables are seperate and any modifcations to one will not effect the other.

```C++
#include <iostream>
using namespace std;

void increment(int n1){//n1 here is a different variable to the n1 in the main function
  n1++;//increment n1
  cout << n1 << endl;//output n1 - it should be one more than the users entered value
}

int main(){

  cout << "Enter a number" << endl;//request number
  int n1;//this n1 is different to the n1 declared in the above function, modifications to one won't effect the other
  cin >> n1;//get number from user
  increment(n1);//call function and pass in n1

  cout << n1 << endl;//output n1 - it should be the same as the users entered value
}

```

Making use of global variables is seen as an easier approach your variables are instanly available to all parts of your program. However, you should aim to limit the amount of global variables you declare and instead make use of function parameters and return values to pass data to different parts of your program. This helps aid the ‘security’ of your code as only parts of the code that should be able to access certain information can.

The example below provides another example of how scope affects the visbility of variables within our program. Review the code and comments to understand the visibility of different local and global variables within the sample program.

```C++
#include <iostream>
using namespace std;

int globalVar = 10; //global variable available within rest of program;

void func1(){
    int localVar = 20; //local variable only available within this function
    localVar += globalVar; //notice the use of global variable here
    cout << "Func1: " << localVar << endl;
}

int main() {
    int localVar2 = 12; // local variable only available within whole main function
    localVar2 += globalVar; // notice can also use global variable here
    cout << "Main: " << localVar2 << endl;
    cout << localVar << endl;
    //above line will throw an error as localVar is only available in func1()

    func1(); // call to func1
    int num1 = 10; // num1 available within whole main function
    if(num1 > 9){
        num1++;
        cout << num1 << endl;
        int num2 = 20; // num2 available only with if statement block;
    }
    cout << num2 << endl;
    //above line will throw an error as num2 only available in block it was
    //declared.


    for(int i = 0; i < 20; i++){
        cout << i << endl; //i is declared in the loop so only accessible here      
    }
    cout << "i after loop is" << i << endl; //i is not accessible here            

    return 0;
}
```
