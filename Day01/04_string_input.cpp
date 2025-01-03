#include <iostream>
using namespace std;
int main()
{
    // method for single word string without any space
    string str;
    cout << "Enter the first name : ";
    cin >> str;
    cout << "You name is " << str;
    // method for taking multi words string within space
    string fullName;
    cout << "Enter your full name : ";
    getline(cin, fullName);
    cout << "Welcome " << fullName << "!" << endl;
    return 0;
}
