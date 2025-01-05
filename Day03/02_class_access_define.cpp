#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// ****typedef change the data type name****

// Why use class over structure in C++ disadvantages of struct and advantages of class?
// In C++, both classes and structures are used to group related data, but the main difference is that classes are more powerful and flexible.
// By default, members of a structure are **public**, meaning anyone can access or change them, while in classes, members are **private** by default,
// meaning only the class can control how the data is accessed.
// Classes also let you organize both **data** and **functions** (called methods) together, making it easier to build complex programs.
// Additionally, classes support advanced features like inheritance and polymorphism, which structures do not.
// So, classes are used when you need more control, security, and organization in your program.

class CoffeeShop
{
private:
    // **** Private members (accessible only by class methods) ****
    float totalSales;       // Keeps track of total sales
    float avgSalePerDay;    // Average sales per day
    int numOfEmployees;     // Number of employees
    int dailyCustomerCount; // Number of customers per day

public:
    // **** Public members (directly accessible by objects) ****
    string name;     // Name of the coffee shop
    string location; // Location of the coffee shop
    bool isOpen;     // Status: open or closed

    // A **constructor** in a class is a special function that automatically runs when we create an object from the class.
    // It's used to initialize the object's data or set up initial conditions.
    // For example, when you create a **CoffeeShop** object, the constructor can set the name, location, and number of employees,
    // so you don't have to set them manually after creating the object.
    // Constructors help make the code cleaner and more organized by ensuring that objects start with the right values.
    // You can also define custom constructors to initialize objects in different ways based on the needs of your program.

    // **** Constructor to initialize the CoffeeShop ****
    CoffeeShop(string shopName, string shopLocation, int employees, bool status)
    {
        name = shopName;            // Initialize shop name
        location = shopLocation;    // Initialize location
        numOfEmployees = employees; // Initialize number of employees
        isOpen = status;            // Initialize shop status
        totalSales = 0.0;           // Initialize total sales to 0
        avgSalePerDay = 0.0;        // Initialize average sales to 0
        dailyCustomerCount = 0;     // Initialize daily customer count to 0
    }

    // When you define a function inside a class, it is called a method.

    // **** Method to display shop information ****
    void displayInfo()
    {
        cout << "Welcome to " << name << " located at " << location << endl;
        cout << "Status: " << (isOpen ? "Open" : "Closed") << endl;
        cout << "Number of Employees: " << numOfEmployees << endl;
        cout << "Total Sales: $" << totalSales << endl;
        cout << "Average Sale per Day: $" << avgSalePerDay << endl;
        cout << "Daily Customer Count: " << dailyCustomerCount << endl;
    }

    // **** Method to record a sale and update average sale per day ****
    void recordSale(float saleAmount)
    {
        totalSales += saleAmount; // Add sale amount to total sales
        dailyCustomerCount++;     // Increment customer count
        cout << "Sale recorded: $" << saleAmount << endl;

        // Update the average sales per day (assuming a 30-day month)
        avgSalePerDay = totalSales / 30;
    }

    // **** Method to hire new employees ****
    void hireEmployees(int newEmployees)
    {
        numOfEmployees += newEmployees; // Add new employees to total
        cout << "Hired " << newEmployees << " new employees!" << endl;
    }

    // **** Method to change shop location ****
    // Syntax for creating class method outside the class (best practice)
    // void CoffeeShop::changeLocation(string newLocation);
    void changeLocation(string newLocation)
    {
        location = newLocation; // Update shop location
        cout << "The shop has moved to " << newLocation << endl;
    }

    // **** Method to open or close the shop ****
    void changeStatus(bool status)
    {
        isOpen = status; // Update shop status
        cout << "The shop is now " << (isOpen ? "open" : "closed") << "." << endl;
    }
};

// Syntax for defining class method outside the class (best practice, commented here)
// void CoffeeShop::changeLocation(string newLocation) {
//     location = newLocation;
//     cout << "The shop has moved to " << newLocation << endl;
// }

int main()
{
    // **** Create a CoffeeShop object and initialize using constructor ****
    CoffeeShop myShop("The White Canary Cafe", "Mirpur", 5, true);

    // Display initial shop information
    myShop.displayInfo();

    // Update and perform some operations
    cout << "Updated data below: " << endl;
    myShop.recordSale(150.75);        // Record a sale
    myShop.recordSale(200.50);        // Record another sale
    myShop.hireEmployees(4);          // Hire 4 new employees
    myShop.changeLocation("Gulshan"); // Change shop location
    myShop.isOpen = false;            // Update shop status to closed

    // Display updated shop information
    myShop.displayInfo();

    // Private variables can only be accessed by class methods, not directly (e.g., myShop.totalSales would cause an error)
    // myShop.totalSales;  // Uncommenting this will result in an error as totalSales is private.

    return 0;
}
