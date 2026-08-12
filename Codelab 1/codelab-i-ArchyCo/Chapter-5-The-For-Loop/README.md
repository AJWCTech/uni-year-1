# Chapter 5 - The For Loop

* [The For Loop](#the-for-loop)
  * [While Loops vs For Loops](#while-loops-vs=for-loops)
* [Nested For Loops](#nested-for-loops)
  * [Example 1: Simple Pattern](#example-1-simple-pattern)
  * [Example 2: A More Complex Pattern](#example-2-a-more-complex-pattern)


## The For Loop

A for loop is very similar to a while loop. The difference is subtle.

You tend to use WHILE loops when you don’t know how many iterations of the loop there is going to be. For example, if you are writing a quiz program you might not know how many times a player will get a question wrong.

You use FOR loops when you do know how many iterations of the loop there need to be. For example, if you are writing a program that prints every character in the word “Computing”, you know that you will need to execute the loop 9 times.

&nbsp;
&nbsp;

### While Loops vs For Loops

The following code snippets show how a while loop that counts from 0 to 10 compares to a for loop that counts from 0 to 10.  

*While Loop*
```C++
int count = 0;
while(count <= 10){
  cout << count << endl;
  count++
}
```

*For Loop*
```C++
for(int count = 0; count <= 10; count++){
  cout << count << endl;
}
```

You can see that in these examples the code has very similar components. They both contain:

* *Initialisation:* A variable to store the current count. This is the starting point of the loop  
  ```
  int count = 0
  ```

* *Condition:* The condition in which the loop will keep iterating                                                 
  ```
  count <= 10
  ```

* *Incrementation:* How much the variable count will increase on each iteration of the loop                          
  ```
  count++
  ```   

Whilst they both have these three components, the difference is that the FOR loop all these components included together within the loop 'header'. The while loop in comparison only includes the condition, and the initialisation and incrementation are included seperately.

To write a FOR loop these three components are included within the loops parentheses, separated by a semicolon.

```C++
for(initialisation; condition; incrementation){
	//code to run on loop
}
```

When run the for loop acts in the same way as a WHILE loop in that it will continue to run as  long as the condition evaluates to TRUE.

&nbsp;
&nbsp;

## Nested For loops

A nested loop is a (inner) loop that appears in the loop body of another (outer) loop, much like nested IF statements that we saw in chapter 2. If you nest one loop inside another the nested loop will run its number of iterations every time the outer loop iterates. Lets see this in action with an example...

&nbsp;
&nbsp;

### Example 1: Simple Pattern

```C++
for (int i=0; i<5; i++) {  //execute the outer loop 5 times  
    for (int j=0; j<5; j++) {//execute inner loop 5 times for every iteration of outerloop
        cout << "\*" << endl;   //print 5 stars
    }
    cout << endl; //print to a new console line
}
```

The above program prints the following pattern to console:

```
*****
*****
*****
*****
*****
```

In this example we have one loop nested inside another. The outer loop is set to run 5 times. On each iteration the outer loop exectues the inner loop, which itself runs 5 times to print 5 stars in a row, then a new line is printed to the console after the inner loop finishes. The process of exectuion for this example is as follows.

```
//outer loop iteration 1
Run outer loop as i (0) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 2
Run outer loop as i (1) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 3
Run outer loop as i (2) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 4
Run outer loop as i (3) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

//outer loop iteration 5
Run outer loop as i (4) is less than 5
  Run inner loop as j (0) is less than 5
    Output star
  Run inner loop as j (1) is less than 5
    Output star
  Run inner loop as j (2) is less than 5
    Output star
  Run inner loop as j (3) is less than 5
    Output star
  Run inner loop as j (4) is less than 5
    Output star
  Stop Inner loop as j (5) is not less than 5

  Output newline character

Stop outer loop as i (5) is not less than 5
```

Therefore in total the inner loop runs 25 times, 5 times for each iteration of the outer loop.

Note that we have used the letters ```i``` and ```j``` to keep track of what each loops current ‘count’ is. It is not crucial that you use ```i``` and ```j```, however these variables are typically used in loops.

&nbsp;
&nbsp;

### Example 2: A More Complex Pattern

We can modify the above example so that the following pattern is printed:

```
*****
****
***
**
*
```

```C++
for (int i=1; i<=5; i++) {  //execute the inner loop 5 times  
    for (int j=i; j<=5; j++) {
        cout << "\*" << endl;   //print 5 stars
    }
    cout << endl; //print to a new console line
}
```

The difference between this program and the one seen in Example 1 is subtle. Look at the inner for loop and you will see that the initialisation component is not ```int j = 1;``` but instead ```int j = i;```  It utilises the ```i``` variable from the outer loop. This means that on the first iteration of the loop the inner loop begins at ```int j = 1;``` but on the second iteration ```int j = 2;``` and on the third iteration ```int j = 3``` and so on. Because the starting point for the inner for loop increases by ```+1``` on each iteration of the outer loop, the number of printed stars will also decrease by ```-1``` on each iteration.
