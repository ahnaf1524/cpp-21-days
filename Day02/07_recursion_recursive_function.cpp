#include <iostream>
#include <iomanip>
using namespace std;

/*
===========================================
Lesson Outcomes:
===========================================
1. **Recursive Functions**:
   - A function that calls itself to solve smaller instances of the same problem.
   - Example: Factorial, Fibonacci sequence.

2. **Factorial**:
   - The product of all positive integers less than or equal to `n`.
   - Defined as:
       - `0! = 1` (by definition)
       - `1! = 1` (by definition)
       - `n! = n * (n - 1)!`
   - Example: `4! = 4 * 3 * 2 * 1 = 24`.

3. **Fibonacci Sequence**:
   - A series where each term is the sum of the two preceding terms.
   - Defined as:
       - `f(0) = 1` (by definition)
       - `f(1) = 1` (by definition)
       - `f(n) = f(n-1) + f(n-2)` for `n >= 2`.
   - Example: `1, 1, 2, 3, 5, 8, 13, ...`.

4. **Recursive vs Iterative Approach**:
   - **Recursive**: Breaks the problem into smaller sub-problems but can result in many function calls, leading to performance issues for large inputs.
   - **Iterative**: Uses loops to achieve the same result with better efficiency.
*/
int factorial(int n);

/*
Factorial Function:
- Calculates the factorial of a number using recursion.
- Base Case:
    - If `n == 1` or `n == 0`, return `1`.
- Recursive Case:
    - Multiply `n` by the factorial of `(n-1)`.
*/
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1; // Base case: factorial of 0 or 1 is 1.
    }
    return n * factorial(n - 1); // Recursive case.
}

int fibonacci(int n);

/*
Fibonacci Function:
- Calculates the nth Fibonacci number using recursion.
- Base Case:
    - If `n < 2`, return `1`.
- Recursive Case:
    - Return the sum of the previous two Fibonacci numbers:
      `f(n-1) + f(n-2)`.
*/
int fibonacci(int n)
{
    if (n < 2)
    {
        return 1; // Base case: First two terms are both 1.
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case.
}
int main()
{
    // Factorial Calculation
    int a;
    cout << "Enter an integer to calculate its factorial: ";
    cin >> a;
    int fact = factorial(a); // Call the factorial function
    cout << "The factorial of " << a << " is: " << fact << endl;

    // Fibonacci Calculation
    int b;
    cout << "Enter another integer to get its Fibonacci value: ";
    cin >> b;
    int fib = fibonacci(b); // Call the Fibonacci function
    cout << "The Fibonacci value at position " << b << " is: " << fib << endl;

    return 0;
}

/*
===========================================
Additional Notes:
===========================================
1. **Recursive Execution**:
    - Each function call creates a new instance of the function in memory.
    - A base case is essential to prevent infinite recursion.
    - Once the base case is reached, the function begins to return values step by step (unwinding the recursion).

2. **Efficiency**:
    - Recursive Fibonacci calculation has exponential time complexity (`O(2^n)`), making it inefficient for large inputs.
    - Factorial recursion is efficient for small inputs, but iterative approaches are generally preferred for better performance.

3. **Recommendation**:
    - Use recursion only when it simplifies the problem significantly or is the most intuitive solution.
    - For large inputs, consider iterative methods or memoization techniques to optimize performance.
*/