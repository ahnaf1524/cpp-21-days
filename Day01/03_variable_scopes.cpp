#include <iostream>
using namespace std;
int g = 145; // global scope
void another()
{
    int a = 14; // local scope
    cout << a << " from local scope" << endl;
    cout << g << endl;
}
int main()
{
    int x = 45; // local scope
    cout << "(from main() scope)value of a is " << x << endl;
    another();
    cout << g << endl;
    return 0;
}