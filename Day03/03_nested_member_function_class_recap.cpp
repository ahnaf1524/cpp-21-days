#include <iostream>
#include <string>
using namespace std;

class SmartPhone
{
private:
    string pinCode; // PIN code to unlock the phone
    bool isLocked;  // Phone lock status (true = locked, false = unlocked)

    // Private method to validate the PIN entered by the user
    // This method is not accessible outside the class
    bool validatePin(const string &inputPIN)
    {
        return inputPIN == pinCode; // Returns true if the input PIN matches the stored PIN
    }

public:
    // Constructor with an initializer list to set the initial PIN and lock the phone
    SmartPhone(string initialPin) : pinCode(initialPin), isLocked(true) {}

    // Method to unlock the phone (calls the private `validatePin` method)
    void unlock(const string &inputPin)
    {
        if (validatePin(inputPin)) // Check if the entered PIN is correct
        {
            isLocked = false; // Unlock the phone
            cout << "Phone unlocked successfully!" << endl;
        }
        else
        {
            cout << "Invalid PIN. Phone remains locked." << endl;
        }
    }

    // Method to lock the phone
    void lock()
    {
        isLocked = true; // Lock the phone
        cout << "Phone is now locked." << endl;
    }

    // Method to check and display the phone's lock status
    void status()
    {
        cout << "Phone is currently " << (isLocked ? "Locked" : "Unlocked") << endl;
    }

    // Method to perform an action (e.g., use an app)
    void performAction(const string &action)
    {
        if (isLocked) // Check if the phone is locked
        {
            cout << "Phone is locked. Please unlock it to perform this action." << endl;
        }
        else
        {
            cout << "Performing action: " << action << endl;
        }
    }
};

int main()
{
    // Object-Oriented Programming (OOP) Concepts in C++
    // --------------------------------------------------
    // C++ was initially called "C with Classes" by Bjarne Stroustrup.
    // Classes are an extension of structures in C but with additional features.

    // Limitations of Structures (in C):
    // - Members are always public.
    // - No methods (functions inside structures).

    // Advantages of Classes:
    // - Classes combine data (properties/variables) and methods (functions) into a single unit.
    // - Classes allow data encapsulation by controlling access with `private`, `public`, or `protected` keywords.
    // - Classes provide better code organization and reusability.

    // Differences Between Classes and Structures in C++:
    // - In C++, structures can also have methods and access modifiers (`public`, `private`, etc.).
    // - By default, structure members are `public`, whereas class members are `private`.

    // Example of Declaring Objects Along with a Class:
    // class Employee {
    //     // Class definition
    // };
    // Employee sifat, rifat, ahnaf;

    // Note:
    // - If a class member (e.g., `salary`) is private, it cannot be accessed directly using an object, like `harry.salary`.

    // Constructors:
    // - Constructors are special functions used to initialize class properties when an object is created.
    // - If a property is a reference or constant, it must be initialized using an **initializer list**.

    // Example Without Initializer List:
    // class Example {
    //     int x;
    //     string y;
    // public:
    //     Example(int a, string b) {
    //         x = a;  // Assignment after default initialization
    //         y = b;
    //     }
    // };

    // Example Using Initializer List:
    // class Example {
    //     int x;
    //     string y;
    // public:
    //     Example(int a, string b) : x(a), y(b) {}  // Direct initialization
    // };

    // Note:
    // - The `this` pointer is used to refer to the current object's properties or methods
    //   when there is ambiguity between member variables and parameters.

    // Nesting Member Function

    // Nesting member functions means one class function calling another within the same class. It helps reuse code and keep logic organized, like an `unlock()` function calling a private `validatePin()` to check the user's PIN. validatePin() not exposed to user directly
    // Set a PIN for the phone
    string pin;
    cout << "Set a 4-digit PIN for your phone: ";
    cin >> pin; // User sets the initial PIN

    SmartPhone myPhone(pin);

    int choice;
    string inputPin;

    // Main simulation loop
    do
    {
        // Display the menu
        cout << "\n--- Smartphone Simulation ---" << endl;
        cout << "1. Unlock Phone" << endl;
        cout << "2. Lock Phone" << endl;
        cout << "3. Check Phone Status" << endl;
        cout << "4. Use an App (e.g., Camera, Calculator)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Input validation to ensure the user enters a valid number
        if (cin.fail())
        {
            cin.clear();               // Clear the error state
            cin.ignore(INT_MAX, '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue; // Restart the loop
        }

        // Handle the user's choice using a switch statement
        switch (choice)
        {
        case 1: // Unlock the phone
            cout << "Enter PIN to Unlock: ";
            cin >> inputPin;
            myPhone.unlock(inputPin);
            // Note: `validatePin` is called internally; the user cannot directly access it.
            break;

        case 2: // Lock the phone
            myPhone.lock();
            break;

        case 3: // Check the phone's status
            myPhone.status();
            break;

        case 4: // Use an app (only if the phone is unlocked)
        {
            cout << "Enter the app name you want to use: ";
            cin.ignore(); // Clear the input buffer to avoid issues with getline
            string appName;
            getline(cin, appName);          // Read the app name from the user
            myPhone.performAction(appName); // Perform the action (if unlocked)
            break;
        }

        case 5: // Exit the simulation
            cout << "Exiting Smartphone Simulation. Goodbye!" << endl;
            break;

        default: // Handle invalid menu choices
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 5); // Loop until the user chooses to exit

    return 0;
}
