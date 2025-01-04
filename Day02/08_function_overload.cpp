#include <iostream>
#include <iomanip>
using namespace std;

// Function with two parameters
int sum(int a, int b)
{
    cout << "Using function with 2 arguments " << endl;
    return a + b; // Adds two integers and returns the result
}

// Overloaded function with three parameters
int sum(int a, int c, int b)
{
    cout << "Using function with 3 arguments " << endl;
    return a + b + c; // Adds three integers and returns the result
}

// calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.1416 * r * r * h);
}
// calculate the volume of a cube
int volume(int a)
{
    return (a * a * a);
}
// rectangle box
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    // Calling the two-argument version of the sum function
    // cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3 and 6 is " << sum(3.2, 6) << endl;

    // Calling the three-argument version of the sum function
    cout << "The sum of 3, 7, and 6 is " << sum(3, 6, 7) << endl;
    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;
    return 0;
}
