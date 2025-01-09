#include <iostream>
using namespace std;

// FRIEND FUNCTION EXAMPLE

class Complex
{
private:
    double realPart, imaginaryPart;

public:
    // Constructor with default arguments
    Complex(double real = 0, double imag = 0) : realPart(real), imaginaryPart(imag) {}

    // Function to display the complex number
    void display() const
    {
        cout << "Complex Number: " << realPart << " + " << imaginaryPart << "i" << endl;
    }

    // Friend function declaration
    // Declaring sumComplex() as a friend of this class
    // This allows sumComplex() to access private members of Complex
    friend Complex sumComplex(const Complex &num1, const Complex &num2);

    // Getter functions for real and imaginary parts
    double getRealPart() const { return realPart; }
    double getImaginaryPart() const { return imaginaryPart; }
};

// Friend function definition
// This function calculates the sum of two complex numbers
Complex sumComplex(const Complex &num1, const Complex &num2)
{
    double realSum = num1.getRealPart() + num2.getRealPart();
    double imagSum = num1.getImaginaryPart() + num2.getImaginaryPart();
    return Complex(realSum, imagSum);
}

int main()
{
    // Creating two complex number objects
    Complex number1(1, 4);
    Complex number2(5, 8);

    // Displaying the complex numbers
    number1.display();
    number2.display();

    // Calculating and displaying their sum
    Complex result = sumComplex(number1, number2);
    result.display();

    return 0;
}

/* Properties of Friend Functions:
1. A friend function is not a member of the class but can access its private and protected members.
2. It is not called using an object of the class. For example, `number1.sumComplex()` is invalid.
3. It can be called directly without using any object.
4. Friend functions usually take objects of the class as arguments.
5. They can be declared in either the public or private section of the class.
6. A friend function cannot directly access class members by their names; it needs to use `objectName.memberName`.
*/
