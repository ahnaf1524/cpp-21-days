#include <iostream>
using namespace std;

int main()
{
    // This program demonstrates various types of operators in C++:
    // Arithmetic Operators, Assignment Operators, Comparison Operators,
    // Logical Operators, and the Ternary Operator.

    // Example of ARITHMETIC OPERATORS
    int a = 12;
    cout << "Post-increment example:" << endl;
    cout << "Before incrementing, a = " << a << endl;
    cout << "Post-increment (a++): " << a++ << endl; // Prints the value of 'a' and then increments it.
    cout << "After post-increment, a = " << a << endl;

    int b = 10;
    cout << "\nPre-increment example:" << endl;
    cout << "Before incrementing, b = " << b << endl;
    cout << "Pre-increment (++b): " << ++b << endl; // Increments the value of 'b' and then prints it.
    cout << "After pre-increment, b = " << b << endl;

    // Example of ASSIGNMENT OPERATORS
    cout << "\nAssignment operator example:" << endl;
    int x = 125;
    cout << "Initial value of x: " << x << endl;

    // Uncomment the desired line to see the effect of each assignment operator:
    // x += 25; // Adds 25 to x (equivalent to x = x + 25).
    // x -= 25; // Subtracts 25 from x.
    // x *= 25; // Multiplies x by 25.
    // x /= 25; // Divides x by 25.
    x %= 2; // Sets x to the remainder when divided by 2.
    cout << "After 'x %= 2', x = " << x << endl;

    // Example of COMPARISON OPERATORS
    cout << "\nComparison operator example:" << endl;
    int num1 = 10, num2 = 89;
    // Comparison operators return true (1) or false (0).
    bool comparisonResult = (num1 < num2); // Change this to any of: ==, !=, >, <, >=, <=
    cout << "Is num1 < num2? " << comparisonResult << endl;

    // Example of LOGICAL OPERATORS
    cout << "\nLogical operator example:" << endl;
    // Logical operators: && (AND), || (OR), ! (NOT)
    bool logicalResult = (num1 == num2 || num2 > num1); // Logical OR example
    cout << "Is num1 equal to num2 OR num2 greater than num1? " << logicalResult << endl;

    logicalResult = (num1 == num2 && num2 > num1); // Logical AND example
    cout << "Is num1 equal to num2 AND num2 greater than num1? " << logicalResult << endl;

    logicalResult = !(num1 == num2 && num2 > num1); // Logical NOT example
    cout << "NOT of the above condition: " << logicalResult << endl;

    // Example of TERNARY OPERATOR
    cout << "\nTernary operator example:" << endl;
    int time = 18;
    string greeting = (time < 18) ? "Good day." : "Good evening."; // Ternary operator format: (condition) ? true_value : false_value
    cout << "Greeting based on time: " << greeting << endl;
    return 0;
}
