#include <iostream>
using namespace std;
int main()
{
    // input stream => keyboard , mouse input to main memory
    // output stream => process input and output to the outut device such that monitor
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
    return 0;
}