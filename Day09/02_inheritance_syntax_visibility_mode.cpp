#include <iostream>
#include <string>
using namespace std;
// --- Introduction to Inheritance Syntax & Visibility Mode ---
/*
Inheritance in C++ allows a class (derived class) to acquire properties and behaviors (methods) of another class (base class).
This promotes code reuse and establishes relationships between classes, often forming a hierarchical structure.

Syntax:
class DerivedClass : visibility-mode BaseClass {
    // Members of the derived class
};

- visibility-mode determines how the base class members are inherited by the derived class.
- "DerivedClass" is the child class, and "BaseClass" is the parent class.
*/

// --- Base Class Example ---

class Vehicle
{
public:
    string brand;
    int wheels;
    // Parameterized Constructor
    Vehicle(string b = "unknown", int w = 0)
    {
        brand = b;
        wheels = w;
    }
    // Method for Display details
    void displayDetails(void)
    {
        cout << "Brand: " << brand << endl;
        cout << "Wheels: " << wheels << endl;
    }
};

// --- Derived Class Using Public Visibility Mode ---
/*
In public visibility mode:
- Public members of the base class become public in the derived class.
- Private members of the base class are NOT inherited.
*/
class Car : public Vehicle
{
public:
    int doors;
    // Constructor for derived class
    Car(string b = "unknown", int w, int d) : Vehicle(b, w)
    { // Call the base class constructor
        doors = d;
    }
    // Method for Display
    void displayCarDetails(void)
    {
        displayDetails();
        cout << "Doors: " << doors << endl;
    }
};

// --- Derived Class Using Private Visibility Mode ---
/*
In private visibility mode:
- Public members of the base class become private in the derived class.
- These members can only be accessed within the derived class, NOT outside of it.
*/

class Motorcycle : private Vehicle
{
public:
    string type;
    Motorcycle(string b, int w, string t) : Vehicle(b, w)
    {
        type = t;
    }
    // Method for motorcycle details
    void displayMotorCycleDetails(void)
    {
        displayDetails();
        cout << "Type: " << type << endl;
    }
};
int main()
{
    // Public Inheritance Example
    Car myCar("Toyota", 4, 4);
    cout << "Car Details: " << endl;
    myCar.displayCarDetails(); // Public members are accessible directly

    // Private Inheritance Example
    Motorcycle myMotorcycle("Harley", 2, "Cruiser");
    cout << "\nMotorcycle Details: \n";
    myMotorcycle.displayMotorCycleDetails(); // Can only access through derived class methods

    // Read about Inheritance Syntax Visibility : https://shorturl.at/07kQM

    return 0;
}
// --- Takeaways ---
/*
1. Visibility Modes:
   - Public: Keeps inherited members' accessibility as it is in the base class.
   - Private: Converts all inherited members to private in the derived class.
   - Protected: Keeps inherited members accessible only within the class hierarchy.

2. Characteristics:
   - Constructors of the base class are called first during object creation.
   - Only public and protected members are inherited; private members are not.
   - Inheritance allows overriding base class methods for customization.

3. Notes:
   - Always specify the visibility mode explicitly to avoid confusion.
   - Use public inheritance for "is-a" relationships (e.g., a Car is a Vehicle).
   - Use private inheritance for "has-a" relationships or implementation details.

4. Advanced Topics:
   - Virtual Inheritance: To resolve ambiguity in multiple inheritance.
   - Access Modifiers: Influence how members are inherited and used.
*/