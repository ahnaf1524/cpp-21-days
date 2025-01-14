#include <iostream>
#include <string>
using namespace std;

// TOPICS COVERED
// ============= Multilevel Inheritance Example ====

// Base class: Employee
// Represents a general employee in a company.
class Employee
{
protected:
    string name; // Employee name (protected so derived classes can access it)
    int id;      // Employee ID (protected so derived classes can access it)

public:
    // Sets the employee details: name and ID
    void set_employee_details(string employee_name, int employee_id)
    {
        name = employee_name;
        id = employee_id;
    }

    // Displays the employee details: name and ID
    void display_employee_details()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

// Derived class: Manager inherits from Employee
// Represents a manager in a company who also manages a team.
class Manager : public Employee
{
protected:
    int team_size; // Size of the team managed by the manager

public:
    // Sets the team size managed by the manager
    void set_manager_details(int size)
    {
        team_size = size;
    }

    // Displays the manager's details, including employee info and team size
    void display_manager_details()
    {
        display_employee_details(); // Call base class function to display employee info
        cout << "Manages Team Size: " << team_size << endl;
    }
};

// Further derived class: Director inherits from Manager
// Represents a director in a company who oversees a department.
class Director : public Manager
{
    string department; // Name of the department overseen by the director

public:
    // Sets the department overseen by the director
    void set_director_details(string dept)
    {
        department = dept;
    }

    // Displays the director's full details, including manager and employee info
    void display_director_details()
    {
        display_manager_details(); // Call derived class function to display manager info
        cout << "Department: " << department << endl;
    }
};

int main()
{
    // Create an object of the Director class
    Director director;

    // Set details for the director
    director.set_employee_details("John Doe", 101); // Set employee details
    director.set_manager_details(15);               // Set manager details
    director.set_director_details("Technology");    // Set director details

    // Display the full details of the Director
    cout << "Director Details: " << endl;
    director.display_director_details();

    return 0;
}

/*
===================== NOTES =====================

### Explanation: Company Hierarchy Analogy ###
1. Base Class (Employee):
   - Represents general employees in a company.
   - Contains attributes like `name` and `id`.
   - Methods:
     - `set_employee_details`: Assigns employee details.
     - `display_employee_details`: Prints employee details.

2. Derived Class (Manager):
   - Inherits from Employee.
   - Adds specific attributes like `team_size` to represent the size of the team managed.
   - Methods:
     - `set_manager_details`: Assigns the team size.
     - `display_manager_details`: Displays both employee and manager-specific details.

3. Further Derived Class (Director):
   - Inherits from Manager.
   - Adds specific attributes like `department` to represent the department overseen.
   - Methods:
     - `set_director_details`: Assigns the department.
     - `display_director_details`: Displays all the details, including those inherited from Manager and Employee.

### Multilevel Inheritance ###
- `Director` class inherits both the properties and methods of `Manager` and `Employee`.
- Each level in the hierarchy builds on the previous one by adding new functionality.

### Key Notes and Takeaways ###
1. **Purpose**:
   - Multilevel inheritance is used to model real-world hierarchies where each level adds new characteristics or functionality.

2. **Characteristics**:
   - Each derived class inherits the functionality of its base class.
   - Code reusability: Once a base class is defined, it can be extended by derived classes.
   - The last class in the hierarchy has access to all inherited members (unless private).

3. **Key Takeaways**:
   - Use `protected` for members that need to be accessed in derived classes but should not be publicly exposed.
   - Use `public` inheritance to ensure all public members of the base class remain accessible in derived classes.
   - Derived classes can add new attributes and methods to extend the functionality of the base class.
   - Function calls within derived classes can invoke base class methods for consistent reuse of logic.

*/
