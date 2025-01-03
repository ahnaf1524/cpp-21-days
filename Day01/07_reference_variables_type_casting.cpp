#include <iostream>
using namespace std;

// Global variable example
int c = 110; // 'c' is a global variable

// Function demonstrating scope resolution operator and local vs global variables
void conceptOne()
{
    int a, b, c; // Local variables
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    c = a + b; // Local variable 'c' is assigned the sum of 'a' and 'b'
    cout << "Sum of " << a << " and " << b << " is " << c << endl;

    // Without using the scope resolution operator, we cannot access the global 'c' here.
    cout << "Value of the local c is " << c << endl;

    // Accessing the global 'c' using the scope resolution operator (::)
    cout << "Actual value of global c is " << ::c << endl;
}

// Function demonstrating float, double, and long double literals
void conceptTwo()
{
    // Float literal
    float d = 34.4f; // Adding 'f' tells the compiler this is a float

    // Long double literal
    long double e = 34.4l; // Adding 'l' tells the compiler this is a long double

    // Printing the values of float and long double variables
    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << endl;

    // Note: By default, decimal literals (like 34.4) are of type double.
    // Understanding this helps in learning function overloading and type compatibility.

    // Demonstrating the sizes of various types of decimal literals
    cout << "(Default) The size of 34.4 is " << sizeof(34.4) << " bytes " << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << " bytes " << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << " bytes " << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << " bytes " << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << " bytes " << endl;
}

// Function demonstrating reference variables
void conceptThree()
{
    // Reference Variable Example:
    // Consider the name Ahnaf Tahmid.
    // At home, family members call me "Afsar."
    // At school, classmates call me "Ahnaf."
    // I refer to myself as a "CP Enthusiast."
    // All these names point to the same person, just like reference variables point to the same memory location.
    // Reference Variable Example
    float x = 455; // Original variable
    float &y = x;  // 'y' is a reference to 'x'

    // Reference variables act as another name for the same memory location.
    // Any change to 'y' will affect 'x' and vice versa.

    cout << "Value of x: " << x << endl;                  // Outputs: 455
    cout << "Value of y (reference to x): " << y << endl; // Outputs: 455
}

// Function demonstrating type casting
void conceptFour()
{
    int a = 45;      // Integer variable
    float b = 45.25; // Float variable

    // Explicitly type-casting variables
    cout << "The value of a as float: " << (float)a << endl;
    cout << "The value of b as int: " << (int)b << endl;

    // Demonstrating type casting in an expression
    cout << "The expression without type casting: " << a + b << endl;
    cout << "The expression with type casting (b cast to int): " << a + (int)b << endl;

    // Examples of type casting between different types
    /**
     * int --> float     (Integer to Float)
     * float --> int     (Float to Integer)
     * int --> double    (Integer to Double)
     * double --> int    (Double to Integer)
     */
}

int main()
{
    // Function calls to demonstrate each concept

    // First concept: Scope resolution operator and global vs local variables
    // conceptOne();

    // Second concept: Float, double, and long double literals
    // conceptTwo();

    // Third concept: Reference variables
    // conceptThree();

    // Fourth concept: Type casting
    // conceptFour();

    return 0;
}
