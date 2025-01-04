#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ========================
    // ARRAY EXAMPLE 01
    // ========================
    // An array stores elements in a contiguous block of memory.
    int marks[] = {14, 25, 63, 78};

    cout << "Marks are:" << endl;
    cout << "marks[0] = " << marks[0] << endl;
    cout << "marks[1] = " << marks[1] << endl;
    cout << "marks[2] = " << marks[2] << endl;
    cout << "marks[3] = " << marks[3] << endl;

    // ========================
    // ARRAY EXAMPLE 02
    // ========================
    // Declaring an array and assigning values later
    int mathMarks[4];
    mathMarks[0] = 39;
    mathMarks[1] = 59;
    mathMarks[2] = 98;
    mathMarks[3] = 88;

    // You can also modify a specific element in the array
    mathMarks[2] = 89; // Changing the value of `mathMarks[2]`

    cout << "\nMath Marks are:" << endl;
    cout << "mathMarks[0] = " << mathMarks[0] << endl;
    cout << "mathMarks[1] = " << mathMarks[1] << endl;
    cout << "mathMarks[2] = " << mathMarks[2] << endl; // Updated value
    cout << "mathMarks[3] = " << mathMarks[3] << endl;

    // ========================
    // TRAVERSING ARRAYS
    // ========================
    cout << "\nTraversing the `marks` array using a for loop:" << endl;
    for (int i = 0; i < 4; ++i)
    {
        cout << "marks[" << i << "] = " << marks[i] << endl;
    }

    // Same thing using a while loop
    cout << "\nTraversing using a while loop:" << endl;
    int j = 0;
    while (j < 4)
    {
        cout << "marks[" << j << "] = " << marks[j] << endl;
        ++j;
    }

    // Same thing using a do-while loop
    cout << "\nTraversing using a do-while loop:" << endl;
    int k = 0;
    do
    {
        cout << "marks[" << k << "] = " << marks[k] << endl;
        ++k;
    } while (k < 4);

    // ========================
    // POINTER ARITHMETIC EXAMPLE
    // ========================
    // Pointers let us work with memory addresses directly.
    // Formula:
    // `new_address = base_address + i * sizeof(data_type)`

    // Pointer to the base address of the `marks` array
    int *p = marks;

    cout << "\nPointer Arithmetic:" << endl;
    cout << "Value at *p (marks[0]): " << *(p) << endl;           // First element (marks[0])
    cout << "Value at *(p + 1) (marks[1]): " << *(p + 1) << endl; // Second element (marks[1])
    cout << "Value at *(p + 2) (marks[2]): " << *(p + 2) << endl; // Third element (marks[2])
    cout << "Value at *(p + 3) (marks[3]): " << *(p + 3) << endl; // Fourth element (marks[3])

    // Demonstrating post-increment and pre-increment on pointers
    cout << "\nPointer Increment Example:" << endl;
    cout << "Value at *p (post-increment, p++): " << *(p++) << endl; // Access `marks[0]`, then move to `marks[1]`
    cout << "Value at *p (pre-increment, ++p): " << *(++p) << endl;  // Move to `marks[2]`, then access its value

    return 0;
}
