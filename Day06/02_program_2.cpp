#include <iostream>
using namespace std;
// Friend Classes & Member Friend Functions in C++
// Forward Declaration
class Complex;
class Calculator
{
private:
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImaginaryComplex(Complex, Complex);
};
class Complex
{
    double realNumber, imaginaryNumber;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumImaginaryComplex(Complex, Complex);
    // Aliter : Declare the entire calculate class as friend
    friend class Calculator;

public:
    void setNumber(double n1, double n2)
    {
        realNumber = n1;
        imaginaryNumber = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is " << realNumber << " + " << imaginaryNumber << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.realNumber + o2.realNumber);
};
int Calculator ::sumImaginaryComplex(Complex o1, Complex o2)
{
    return (o1.imaginaryNumber + o2.imaginaryNumber);
};
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    double result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    return 0;
}