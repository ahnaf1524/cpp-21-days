#include <iostream>
using namespace std;

/*
===========================================
  Lesson Outcomes:
===========================================
1. Call by Value:
   - A copy of the argument is passed to the function.
   - Changes made inside the function do not affect the original variable.

2. Call by Reference:
   - The actual memory address (reference) of the argument is passed.
   - Changes made inside the function do affect the original variable.
*/

/* Function Prototypes */
void increment(int);   // Call by Value example
void decrement(int &); // Call by Reference example

/* Function Definitions */

// Function to increment a value (Call by Value)
// Takes a copy of the integer parameter and modifies only the copy.
void increment(int n)
{
    n++; // Increments the copy of the variable
    cout << "Inside the function (Call by Value), n is: " << n << endl;
}

// Function to decrement a value (Call by Reference)
// Modifies the original variable directly using a reference.
void decrement(int &n) // The '&' indicates a reference
{
    n--; // Decrements the original variable
    cout << "Inside the function (Call by Reference), n is: " << n << endl;
}
void swap(int &, int &);
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    // ========================================================
    // Call by Value Example
    // ========================================================
    cout << "=== Call by Value Example ===" << endl;

    // Variable declaration and user input
    int value;
    cout << "Please enter an integer: ";
    cin >> value;

    // Display the value before and after the function call
    cout << "(Before Function Call) You entered: " << value << endl;
    increment(value); // Passes a copy of 'value'
    cout << "(After Function Call) You entered: " << value << endl;

    /*
      Call by Value:
      - Use when you don't want the function to modify the original value.
      - Suitable for small data types like integers or floating-point numbers.
    */

    // ========================================================
    // Call by Reference Example
    // ========================================================
    cout << "\n=== Call by Reference Example ===" << endl;

    // Variable declaration and user input
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    // Display the value before and after the function call
    cout << "(Before Function Call) You entered: " << a << endl;
    decrement(a); // Passes the reference of 'a'
    cout << "(After Function Call) You entered: " << a << endl;

    /*
      Call by Reference:
      - Use when you want the function to modify the original value.
      - Suitable for large data types (e.g., arrays, objects) to avoid copying overhead.
    */

    // swap two variables
    int x = 89, y = 67;
    cout << "value of x is " << x << " and the value of is " << y << endl;
    swap(x, y);
    cout << "value of x is " << x << " and the value of is " << y << endl;
    return 0;
}
