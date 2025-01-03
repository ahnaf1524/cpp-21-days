#include <iostream>
#include <iomanip> // Required for manipulators like setw
using namespace std;

int main()
{
    // Variables in C++:
    // A variable is a container that holds data that can be changed during program execution.
    /*
    int a = 34; // Declare an integer variable 'a' and assign it the value 34
    cout << "The value of a was: " << a << endl; // Print the value of 'a'

    a = 45; // Change the value of 'a' to 45
    cout << "The value of a is: " << a << endl; // Print the updated value of 'a'

    char ch = 'A'; // Declare a character variable 'ch' and assign it the value 'A'
    cout << "The value of ch was: " << ch << endl; // Print the value of 'ch'

    ch = '0'; // Change the value of 'ch' to '0'
    cout << "The value of ch is: " << ch << endl; // Print the updated value of 'ch'
    */

    // Constants in C++:
    // A constant is a variable whose value cannot be changed after initialization.
    const int a = 14; // Declare a constant integer variable 'a' and assign it the value 14
    cout << "The value of constant 'a' is: " << a << endl;

    // Uncommenting the line below will cause an error because constants cannot be reassigned.
    // a = 25; // Error: Assignment to a constant variable is not allowed

    // Manipulators in C++:
    // Manipulators help us format how data is displayed in the console.
    // Example: 'endl' moves the output to a new line, and 'setw' sets the width for the next output.

    int x = 12, y = 36, z = 47;

    // Using 'setw' (set width):
    // 'setw' ensures the output takes up a fixed number of character spaces.
    // If the value is shorter than the specified width, it is right-aligned with extra spaces on the left.

    cout << "The value of x is " << setw(4) << x << endl; // Takes 4 character spaces for x
    cout << "The value of y is " << setw(4) << y << endl; // Takes 4 character spaces for y
    cout << "The value of z is " << setw(4) << z << endl; // Takes 4 character spaces for z

    // Operator Precedence:
    // Operator precedence determines the order in which operations are executed.
    // BODMAS (Brackets, Orders/Exponents, Division/Multiplication, Addition/Subtraction) applies in C++.

    int m = 3, n = 4;
    // Example: Calculating a result using precedence
    int ans = (m * 5) + n - 45 + 87; // Use brackets to group high-priority calculations
    cout << "The calculated result is: " << ans << endl;

    // Notes:
    // - Use brackets for clarity and to avoid confusion.
    // - Associativity determines the direction of execution for operators of the same precedence.
    // - Precedence defines which operation takes priority.

    return 0;
}

// Resources for further learning:
// https://en.cppreference.com/w/cpp/io/manip
// https://en.cppreference.com/w/cpp/language/operator_precedence
