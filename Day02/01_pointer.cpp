#include <iostream>
#include <iomanip>
using namespace std;
// & => Ampersand Sign / Address of operator
// * => dereference operator / value at operator
int main()
{
    // What is a pointer?
    // A pointer is a variable that holds the memory address of another variable.
    // Think of it as a "location tracker" for a specific variable in memory.

    int a = 3; // An integer variable `a` with a value of 3.

    // A pointer `b` that stores the address of `a`.
    int *b = &a;

    // Display the address of `a` using the address-of operator (&).
    cout << "The address of a is " << &a << endl;

    // Display the same address using the pointer `b` (because `b` points to `a`).
    cout << "The address of a (using pointer b) is " << b << endl;

    // Dereference the pointer `b` to get the value stored at the address it points to (i.e., `a`'s value).
    cout << "The value at address b (value of a) is " << *b << endl;

    // Explanation of operators:
    // - `&` (Address-of operator): Gets the memory address of a variable.
    // - `*` (Dereference operator): Accesses the value stored at the memory address.

    // Real-world analogy:
    // Imagine your program's variables are stored in a "warehouse" (RAM). A pointer is like a slip of paper
    // with the location of an item in that warehouse.

    // ============================
    // Pointer to Pointer Example
    // ============================
    // A pointer to a pointer is like having another "location tracker" that points to the first pointer.
    int **c = &b; // `c` stores the address of pointer `b`.

    // Show the address of `b` (stored in pointer `c`).
    cout << "The address of b is " << &b << endl;

    // Show the address of `c`.
    cout << "The address of c is " << &c << endl;

    // Dereference `c` to get the value stored at the address it points to (i.e., `b`).
    cout << "The value at address c (address of a) is " << *c << endl;

    // Double dereference `c` to get the value stored at the address pointed to by `b` (i.e., the value of `a`).
    cout << "The value at address value_at(value_at(c)) (value of a) is " << **c << endl;

    // ============================
    // Real-Life Scenario: Tea Stall
    // ============================

    // Imagine:
    // 1. There's a cup of tea at a tea stall (the tea is stored in memory as a variable).
    // 2. The tea seller knows where the tea is kept (pointer to tea).
    // 3. You don't know where the tea is, but you know where the tea seller is (pointer to pointer).

    int tea = 5; // The tea is represented as an integer with a value of 5.

    int *teaSeller = &tea; // The tea seller knows the location of the tea (pointer to tea).
    int **me = &teaSeller; // You know the location of the tea seller (pointer to pointer).

    // Accessing the tea directly:
    cout << "Tea quantity directly: " << tea << endl;

    // Accessing the address of the tea (tea seller's information).
    cout << "Tea address (seller's info): " << teaSeller << endl;

    // Accessing the address of the tea seller (your information).
    cout << "Seller address (your info): " << me << endl;

    // Accessing the tea through the tea seller.
    cout << "Tea via seller (*teaSeller): " << *teaSeller << endl;

    // Accessing the tea through you (via the tea seller).
    cout << "Tea via you (**me): " << **me << endl;

    return 0;
}
