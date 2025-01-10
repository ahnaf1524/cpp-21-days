#include <iostream>
using namespace std;

class Complex
{
    int realPart, imaginaryPart;

public:
    // Constructor with default arguments
    Complex(int x = 0, int y = 0)
    {
        realPart = x;
        imaginaryPart = y;
    }

    void printComplexNumber(void) const
    {
        cout << "Your Number is " << realPart << " + " << imaginaryPart << "i" << endl;
    }
};

int main()
{
    Complex complex1(2, 5);
    complex1.printComplexNumber();
    Complex complex2(5);
    complex2.printComplexNumber();
    return 0;
}
