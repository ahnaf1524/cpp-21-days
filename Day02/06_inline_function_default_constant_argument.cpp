#include <iostream>
#include <iomanip>
using namespace std;

/*
===========================================
  Lesson Outcomes:
===========================================
1. **Static Variables in Functions**:
   - Retain their value between function calls.
   - Initialized only once and persist throughout the program.

2. **Inline Functions**:
   - Small functions that can be expanded in place of their call during compilation.
   - **Advantages**: Eliminates function call overhead, faster execution for small functions.
   - **Disadvantages**: Increases binary size if used for large or frequently called functions.

3. **Default Arguments**:
   - Allow functions to have optional parameters with default values.

4. **Constant Arguments**:
   - Parameters marked as `const` cannot be modified within the function block.
   - Useful when working with pass-by-reference or pointers.
*/

/* Inline Function: Example */
inline int add(int a, int b)
{
    return a + b;
}

/* Static Variable in Functions */
int product(int, int); // Function prototype

int product(int a, int b)
{
    static int c = 0; // Static variable (initialized only once, retains value across calls)
    c = c + 1;        // Increment the value of `c` with each function call
    return a * b + c; // Return the product of `a` and `b`, plus the value of `c`
}

/* Default Arguments */
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

/* Constant Argument Example */
// Parameters cannot be modified inside the function block
// int divisibility(const int n) { ... }
// int strlen(const char *p) { ... }

/*
===========================================
  Inline Functions:
===========================================
- Small functions can be defined as `inline` to suggest compiler expansion at the call site.
- Example:
    inline int add(int a, int b) { return a + b; }
- **When to Use**:
    - For small, frequently used functions (e.g., getter/setter methods).
    - To reduce the overhead of function calls for simple operations.
- **When Not to Use**:
    - For large or complex functions (increases binary size, reducing performance).
    - When the function contains static variables, recursion, or loops.

- **Fun Note**:
    - `inline` is a request to the compiler: "Hey, can you make my function inline?"
    - The compiler might accept or ignore the request, just like a Facebook friend request can be accepted or ignored!
*/

/*
===========================================
  Default Arguments:
===========================================
- Provide default values for function parameters.
- Always place default arguments at the **end** of the parameter list.
- **Example**:
    float moneyReceived(int currentMoney, float factor = 1.04);
- The compiler uses the default value if no argument is provided for `factor`.
- **Tip**: Give compulsory parameters first, then default arguments.
*/

int main()
{
    // Uncomment the code below to test the inline function
    /*
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "The sum of a and b is: " << add(a, b) << endl;
    */

    int money = 100000; // Example balance

    // Using default arguments in the `moneyReceived` function
    cout << "With a balance of " << money << " BDT in your bank account, your total after 1 year will be "
         << moneyReceived(money) << " BDT under the standard plan." << endl;

    cout << "As a VIP account holder, with the same balance of " << money << " BDT, your total after 1 year will increase to "
         << moneyReceived(money, 1.1) << " BDT." << endl;

    return 0;
}
