#include <iostream>
#include <string>
using namespace std;
// Single inheritance is when a derived class inherits from only one base class. This relationship allows the derived class to reuse and extend the functionality of the base class.

// Base Class: Represents a general concept
class Employee
{
private:
    int empId; // Private member: Not directly accessible outside the class or in the derived class
public:
    string name; // Public member: Accessible in derived class and outside the class
    double salary;
    // Public Methods
    void setEmployeeDetails(int id, string empName, double empSalary)
    {
        empId = id; // assigning private number
        name = empName;
        salary = empSalary;
    }
    int getEmpId()
    {
        return empId; // Accessing private member
    }
};

/*
Characteristics of the Base Class:
1. Private members (e.g., empID) are not inherited but can be accessed via public methods.
2. Public members (e.g., name, salary) are inherited as public members in the derived class.
*/

// Derived Class: Represents a specialized version of Employee
class Programmer : public Employee
{
private:
    string primaryLanguage; // Private member : Specific to Programmer Class
public:
    // Method to set programming language
    void setPrimaryLanguage(string language)
    {
        primaryLanguage = language;
    }

    // Method to display all details
    void displayDetails(void)
    {
        // Accessing inherited public members and private member
        cout << "Employee ID: " << getEmpId() << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Primary Programming Language: " << primaryLanguage << endl;
    }
};

/*
Characteristics of the Derived Class:
1. Inherits all public members of the Employee class.
2. Adds its own specific features (e.g., primaryLanguage, setPrimaryLanguage()).
3. Demonstrates reusability and extension of base class functionality.
*/

int main()
{
    // Creating an object of the derived class
    Programmer p;

    // Setting details using inherited method
    p.setEmployeeDetails(101, "Sifat", 75000);

    // Setting derived class-specific details
    p.setPrimaryLanguage("C++");

    // Displaying details
    p.displayDetails();
    return 0;
}

// NOTES AND CHARACTERISTICS OF SINGLE INHERITANCE:
// Access Modifiers in Inheritance:

// Private members of the base class are not directly accessible in the derived class.
// Public members of the base class are inherited as public members in the derived class (when inherited publicly).
// Encapsulation:

// Private members like empID are hidden from the derived class and external access.
// Public methods like getEmpID() and setEmployeeDetails() provide controlled access to private data.
// CODE REUSABILITY:

// The derived class reuses and extends the functionality of the base class, reducing code duplication.
// Specialization:

// The derived class can add its unique functionality (e.g., primaryLanguage in the Programmer class).
// Hierarchy:

// Single inheritance models a one-to-one relationship between base and derived classes.

// KEY DIFFERENCES FROM THE ORIGINAL EXAMPLE:

// Focus on Encapsulation:

// We explicitly highlighted how private members (empID) are accessed only via public methods, emphasizing the importance of encapsulation.
// Added Real-World Context:

// Used a real-world example of an Employee and Programmer to illustrate a practical application of inheritance.
// Additional Comments for Understanding:

// Detailed comments were added to explain class characteristics and the behavior of inheritance.

// SUMMARY :
// Single inheritance is a foundational concept in OOP that promotes reusability and extensibility. The Employee and Programmer example showcases how a derived class can inherit properties and behavior from a base class while adding its own unique functionality. By adhering to principles like encapsulation and reusability, single inheritance simplifies complex system design in a modular and maintainable way.