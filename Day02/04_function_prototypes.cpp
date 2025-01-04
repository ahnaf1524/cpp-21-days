#include <iostream>
using namespace std;

/*
===========================================
  Explanation of Key Concepts:
===========================================

1. Function Prototype:
   - Declares the structure of a function before it is defined.
   - Helps the compiler recognize function calls in the program.
   - Example:
     int sum(int, int);
     // This tells the compiler that there is a function named `sum`
     // that returns an integer and takes two integers as parameters.

2. Function Definition:
   - Provides the actual implementation of the function.
   - Example:
     int sum(int x, int y) {
         return x + y;
     }
     // Here, the `sum` function adds two integers and returns the result.

3. Function Call:
   - Invokes the function to perform its task.
   - Example:
     int ans = sum(a, b);
     // Calls the `sum` function with `a` and `b` as arguments
     // and stores the result in the variable `ans`.

4. Return Type:
   - Specifies what type of value a function will return.
   - Example:
     int sum(int, int);
     // This function returns an integer.

5. void Return Type:
   - Indicates that the function does not return any value.
   - Example:
     void sayHello(string);
     // Outputs a message but does not return anything.
*/

/* Function Prototypes */
int sum(int, int);     // Function prototype for `sum`: returns an int and takes two int parameters
void sayHello(string); // Function prototype for `sayHello`: returns nothing (void) and takes a string parameter

/* Main Function */
int main()
{
    cout << "Function and prototypes lesson" << endl;
    int a = 12, b = 34;

    // Call the `sum` function with `a` and `b` as arguments and store the result in `ans`
    int ans = sum(a, b);

    // Display the result of the addition
    cout << ans << endl;

    // taking user name
    cout << "Enter your first name: ";
    string name;
    cin >> name;

    // Call the `sayHello` function with the user's name as an argument
    sayHello(name);

    cout << "Lesson complete." << endl;

    return 0;
}

/* Function Definitions */

// The `sum` function takes two integers as parameters, adds them, and returns the result
int sum(int x, int y)
{
    return x + y; // Return the sum of the two integers
}

// The `sayHello` function takes a string parameter (the user's name) and outputs a greeting message
void sayHello(string name)
{
    cout << "Have a good day! " << name << endl;
}
