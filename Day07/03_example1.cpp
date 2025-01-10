#include <iostream>
using namespace std;
// TOPIC : PARAMETERIZED AND DEFAULT CONSTRUCTORS IN C++
class Complex
{
    int realPart, imaginaryPart;

public:
    Complex(int x, int y); // Default constructor declaration

    void printComplexNumber(void) const
    {
        cout << "Your Number is " << realPart << " + " << imaginaryPart << "i" << endl;
    }
};
Complex::Complex(int x, int y) // ---> This is parameterized constructor as it takes parameters
{
    realPart = x;
    imaginaryPart = y;
}
int main()
{
    // Implicit Call
    Complex complex1(2, 5);
    complex1.printComplexNumber();
    // Explicit Call
    Complex complex2 = Complex(5, 7);
    complex2.printComplexNumber();
    return 0;
}
