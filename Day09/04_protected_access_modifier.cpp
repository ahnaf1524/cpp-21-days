#include <iostream>
using namespace std;

// ========================================
// PROTECTED ACCESS MODIFIER IN C++ (https://shorturl.at/UQwUO)
// ========================================
// - The `protected` access modifier allows members to be:
//   1. Accessible within the class itself.
//   2. Accessible in derived classes directly.
//   3. NOT accessible from outside the class or through objects.
//
// Characteristics of Protected Members in Inheritance:
// -----------------------------------------------------
// 1. Public Inheritance:
//    - Protected members in the base class remain protected in the derived class.
// 2. Protected Inheritance:
//    - Protected members in the base class remain protected in the derived class.
// 3. Private Inheritance:
//    - Protected members in the base class become private in the derived class.
//
// Notes on Encapsulation:
// ------------------------
// - The protected modifier ensures data is shared securely between the base and derived classes.
// - Encapsulation is maintained by restricting direct access from outside the class.

// ========================================
// Base Class Definition
// ========================================
class Base
{
protected:
    int protectedVar; // Protected member variable

public:
    // Public method to set the value of protectedVar
    void setProtectedVar(int value)
    {
        protectedVar = value;
    }

    // Public method to display the value of protectedVar
    void showProtectedVar() const
    {
        cout << "ProtectedVar in Base: " << protectedVar << endl;
    }
};

// ========================================
// Derived Class Definition
// ========================================
class Derived : public Base
{
public:
    // Method to modify and display the protected variable
    void accessProtected()
    {
        // Accessing the protected member directly
        protectedVar += 10;
        cout << "ProtectedVar in Derived (Modified): " << protectedVar << endl;
    }
};

// ========================================
// Main Function
// ========================================
int main()
{
    // Notes:
    // 1. `baseObj` is an object of the Base class.
    //    - It cannot access the `protectedVar` directly.
    // 2. `derivedObj` is an object of the Derived class.
    //    - It also cannot access `protectedVar` directly.
    //    - However, it can access `protectedVar` through methods defined in Derived.

    Base baseObj;
    Derived derivedObj;

    // Attempting to directly access protectedVar - This will cause an error:
    // baseObj.protectedVar = 5; // ERROR: 'protectedVar' is protected

    // Accessing protectedVar through public methods of Base
    baseObj.setProtectedVar(20);
    baseObj.showProtectedVar();

    // Accessing protectedVar through Derived class
    derivedObj.setProtectedVar(30); // Using Base's public method
    derivedObj.accessProtected();   // Using Derived's method to modify and display

    return 0;
}

// ========================================
// Summary of Key Points:
// ========================================
// 1. Protected members are NOT directly accessible from objects.
// 2. They are accessible within derived classes through inheritance.
// 3. Public methods in the base class can be used to access or modify protected members.
// 4. Encapsulation ensures that data is not exposed publicly while still being reusable in inheritance.
