
# Functions in C

Functions in C programming are a set of statements that when called, perform a specific tasks. A C program will always have at least one function which would be called **main()**

## Functions

We have numerous built-in functions that can be located in the C standard Library.

A few examples of functions are:

	* printf
	* putchar
	* getchar

These functions can be found in the **<stdio.h>** header file. We call these functions by using them in our source code.

	* #include <\stdio.h>

The **<\stdio.h>** header file contain many functions that we call upon to make our coding a lot easier, but it is not the end all and be all of functions and there are many more header files that contain different functions such as the **<\math.h>** header file to perform arithmetic equations and the **<\string.h>** that can manipulate string characters (array of characters)

When compiling our source codes, the compiler checks through these files and includes these statements into our code.

We don't have to strictly rely on functions in the predefined header files, we can create our own functions too! To clarify even further we can define our own functions through function definitions.

## Function definition

The general syntax of a function definition will look like this:

1. The return type
2. Function name
3. Parameters
4. Function Body

	return_type FunctionName(parameters)
	{
		function body;
	}

A good example could look a little something like this:

	int result(int num1, int num2)
	{
		int result;

		result = num1 * num2;

		return (result);
	}

we can see that this function will pass the result of **a * b**, but in order to use this in our **main()** function we will need to learn how to call this function!

## Function declaration

A function declaration tells the compiler about a functions name and how to call it. The body of the function can be defined in another source file, and when done like this a **Function decliration** is required. If the function body is defined then it will be called a **function definition**.

The syntax for **function declarations** will look like this:

	return_type Functionname( parameters);

A good example as the one listed above, could look a little something like this:

	* int result(int num1, int num2);
			OR
	* int result(int, int);


So if we were to use the example of a function definition and function declaration together it will look a little something like this:

#include <\stdio.h>

int result(int, int);	<------ here is our **Function prototype**


int main(void)	<----- here we have our **main function**
{
	int a = 3;
	int b = 4;
	int resul;
	
	resul = result(a, b);	<------- Here you can see we have called the function into our main function, **function declaration**

	return (0);
}


int result(int num1, int num2)	<-------- And here is our **Function definition**
{
	int result;

	result = num1 * num2;

	return (result);
}

Once we compile this file, the stdout(1) will display the result to the screen. In this case, **12**

Like i have stated before, when we use a **Function Declaration** our function body can be defined elsewhere. The example above is all in one source file but we can also define our function in a separate source file and call it into our main function.

We can also have our **Function Declaration** in a separate file too, this we will refer to as the *function protoype*. But instead of a source file, it will be held in a **HEADER** file and can we call it using the **#include** just as we do when we call the stdio.h header file.

When we do eventually compile, we will need to include the names of these files that contain the function definition and the potential new header files(i will explain personalised header files later).

Example:

	* Function definition in a file called **example1.c**

	int result(int num1, int num2)
	{
		int result;

		result = num1 * num2;

		return (result);
	}

----

	* Function Prototype in a file called **example2.h**

	#ifndef example2_h		<---- #ifndefine (if not defined) the headerfile name,
	#define    example2_h		<---- #define then we will define it, this helps from not repeating unintional functions

	int result(int num1, int num2);		<---- here we have the function declaration

	#endif		<----- EOF statment (end of file) so that the compiler knows this is the end of the header file and will stop reading

----

	* Main function in a filled called **MainExample.c**

	#include "example2.h"

	int main(void)
	{
		int a = 3;
		int b = 4;
		int resu;

		resu = result(a, b);		<---- calling of the function "result"

		return (0);
	}

----

	* And finally when we compile our program

	> gcc example1.c example2.h MainExample.c		<---- the order of the files do not matter
	
<sub> B: our output ill be an **a.out** if not specified otherwise.</sub>

	> ./a.out	<------ executable program
	> 12		<------ stdout (1) will display the result to the screen

----

So as you can see we have divided our initial example in 3 major parts and have located them in separate files:

	* A main source file
	* A header file
	* And a file for our function definition

Now onto the personalised HEADER files:

A header file is a great way of storing previously define functions so that they can be used in other files other than the one it was created in. This is one of the reason we also broke up our work in different files.

When we created our Function definition we stored the function prototype in a HEADER file called **example2.h** (note the file extension ".h" this is reserved for header files) and called the header file into our main file with the **#include** statement, we had also called the function **result** into our main function to perform the task that was needed. 

This allowed the compile to note that there was a header file called "example2.h" that contain a function prototype called **int result(int num2, int num2)**, and collect that function from the function definitions file. It return that function to our main file and the compiled and returned the result of **12**
