#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // for..loops
    // while...loops
    // do...while loops
    // break , continue statements
    for (int i = 0; i <= 5; ++i)
    {
        if (i == 3)
        {
            // continue; // skip the specific value
            break; // stop the loop
        }
        cout << i << endl;
    }
    // int i = 0;
    // while (i <= 5)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // int i = 2;
    // do
    // {
    //     cout << i << endl;
    // } while (i > 5); // if condition is false then fun one time

    return 0;
}