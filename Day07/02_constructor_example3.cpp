#include <iostream>
using namespace std;

/*
   CLASS: Complex
   PURPOSE:
   - This class represents a complex number in the form "real + imaginary*i".
   - Demonstrates the use of a constructor for initializing object attributes.
*/

class Complex
{
    int realPart, imaginaryPart; // Real and imaginary parts of the complex number

public:
    // Constructor Declaration
    // A constructor is a special member function with the same name as the class.
    // It initializes objects of its class and is automatically invoked when an object is created.
    Complex(void); // Default constructor declaration

    // Member function to print the complex number
    void printComplexNumber(void) const
    {
        cout << "Your Number is " << realPart << " + " << imaginaryPart << "i" << endl;
    }
};

// Default Constructor Definition
// Initializes the real and imaginary parts of the complex number
Complex::Complex(void) // Takes no parameter
{
    realPart = 10;      // Default value for the real part
    imaginaryPart = 20; // Default value for the imaginary part
    // cout << "Constructor executed.\n"; // Uncomment for debugging
}

int main()
{
    // Creating objects of the Complex class
    Complex complex1, complex2, complex3;

    // Printing the values of the objects
    complex1.printComplexNumber();
    complex2.printComplexNumber();
    complex3.printComplexNumber();

    return 0;
}

/*
   NOTES ON CONSTRUCTORS:
   1. When a constructor does not receive any arguments, it is called a "default constructor".
   2. A constructor should always be declared in the `public` section of the class.
   3. Constructors are automatically invoked whenever an object is created.
   4. Constructors cannot return values and do not have return types (not even `void`).
   5. Constructors can have default arguments.
   6. It is not possible to take the address of a constructor. (Complicated)
*/
