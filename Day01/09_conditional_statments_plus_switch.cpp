#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // If else
    // else if ladder
    // switch

    // **if-else** even-odd
    // int n;
    // cout << "Enter a integer to determine even or odd : ";
    // cin >> n;
    // if (n % 2 == 0)
    // {
    //     cout << n << " Even." << endl;
    // }
    // else
    // {
    //     cout << n << " Odd." << endl;
    // }
    // 90-100: Grade A
    // 80-89: Grade B
    // 70-79: Grade C
    // 60-69: Grade D
    // Below 60: Fail
    // int marks;
    // cout << "Enter your marks to know your grade : ";
    // cin >> marks;
    // if (marks >= 90 && marks <= 100)
    // {
    //     cout << "Grade A" << endl;
    // }
    // else if (marks >= 80 && marks <= 89)
    // {
    //     cout << "Grade B" << endl;
    // }
    // else if (marks >= 70 && marks <= 79)
    // {
    //     cout << "Grade B" << endl;
    // }
    // else if (marks >= 70 && marks <= 79)
    // {
    //     cout << "Grade C" << endl;
    // }
    // else if (marks >= 60 && marks <= 69)
    // {
    //     cout << "Grade D" << endl;
    // }
    // else
    // {
    //     cout << "Failed" << endl;
    // }

    // ***switch*** calculator
    // char symbol;
    // int a, b;
    // cout << "Enter the first integer : ";
    // cin >> a;
    // cout << "Enter the arithmetic symbol (+ , - , * , / allowed) : ";
    // cin >> symbol;
    // cout << "Enter the second integer : ";
    // cin >> b;
    // int ans = 0;
    // switch (symbol)
    // {
    // case '+':
    //     ans = a + b;
    //     cout << a << symbol << b << " = " << ans << endl;
    //     break;
    // case '-':
    //     ans = a - b;
    //     cout << a << symbol << b << " = " << ans << endl;
    //     break;
    // case '*':
    //     ans = a * b;
    //     cout << a << symbol << b << " = " << ans << endl;
    //     break;
    // case '/':
    //     ans = a / b;
    //     cout << a << symbol << b << " = " << ans << endl;
    //     break;
    // default:
    //     cout << "invalid input given" << endl;
    // }
    // ** Nested else if**
    int year;
    cout << "Enter the year for determine leap year or not : ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is leap year" << endl;
    }
    else if (year % 400 == 0)
    {
        cout << year << " is leap year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }
    return 0;
}