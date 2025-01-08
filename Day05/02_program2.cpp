#include <iostream>
using namespace std;
class Complex
{
private:
    double real, imag;
    static int count; // count instance of these class
public:
    // Complex(double r, double i) : real(r), imag(i) // throw for not giving default argument
    // {
    //     count++;
    // }
    Complex(double r = 0, double i = 0) : real(r), imag(i)
    {
        count++;
    }
    static void displayCount()
    {
        cout << "Total complex object created: " << count << endl;
    }
    void display(void)
    {
        cout << "Complex Number : " << real << " + " << imag << "i" << endl;
    }
    // Getter functions for real and imaginary parts
    double getReal() const { return real; }
    double getImag() const { return imag; }
    // Destructor to decrement count when an object is destroyed
    ~Complex()
    {
        count--;
    }
};
int Complex::count = 0;
// Getter functions for real and imaginary parts
Complex addComplexNumber(Complex arr[], int size)
{
    double sumReal = 0, sumImag = 0;
    for (int i = 0; i < size; ++i)
    {
        sumReal += arr[i].getReal();
        sumImag += arr[i].getImag();
    }
    return Complex(sumReal, sumImag);
}
int main()
{
    int n;
    cout << "Enter the number of complex number : ";
    cin >> n;
    Complex arr[n];
    for (int i = 0; i < n; ++i)
    {
        double real, imag;
        cout << "Enter real part of complex number : " << i + 1 << ": ";
        cin >> real;
        cout << "Enter imaginary part of complex number : " << i + 1 << ": ";
        cin >> imag;
        arr[i] = Complex(real, imag);
    }
    Complex::displayCount();
    for (int i = 0; i < n; ++i)
    {
        arr[i].display();
    }
    Complex sum = addComplexNumber(arr, n);
    cout << "\n Sum of the Complex Number: ";
    sum.display();
    return 0;
}