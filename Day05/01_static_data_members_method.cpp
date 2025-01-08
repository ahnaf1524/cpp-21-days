#include <iostream>
using namespace std;

// TOPICS COVERED:
// - Static Data Members in C++ OOP
// - Static Method Members in C++ OOP

// TeaStall class definition
class TeaStall
{
private:
    // Static data member to track the total number of cups sold by all tea sellers
    static int totalCupSold; // Default value is 0, but initialization is not allowed here inside the class

public:
    // Method to serve tea and increase the total cups sold
    void serveTea(int cups)
    {
        totalCupSold += cups; // Increment total cups sold by the number of cups served
        cout << "Cups served: " << cups << endl;
    }

    // Static method to display the total cups sold across all tea sellers
    static void displayTotalCupsSold(void)
    {
        cout << "Total cups sold by all tea sellers: " << totalCupSold << endl;
    }
};

// Initialize the static data member outside the class
// This is important because static members must be defined outside the class
// Static variables are also called 'Class Variables' in OOP
// For further clarification, check here: https://shorturl.at/8QbxF

// You can initialize the static data member with any value as needed
// int TeaStall::totalCupSold = 0;  // Default initialization, but we can set a custom value as well
// int TeaStall::totalCupSold = 250;  // Custom initialization value
int TeaStall::totalCupSold = 2500; // Initial value set to 2500, or any random value you prefer

// Static variable initialization confusion explanation: https://shorturl.at/9jkw2

int main()
{
    // In C++, static data members are class members shared by all instances (objects) of the class.
    // Unlike non-static data members, static members are not tied to a specific object; instead, they belong to the class itself.
    // Every object of the class will access the same static data member, and it is initialized only once.
    // Static members are useful when you need to track some common data shared by all objects.

    // PURPOSE OF STATIC DATA MEMBERS:
    // ================================
    // 1. Shared among all objects: Static data members are shared by all objects of the class.
    // 2. Memory efficiency: Only one copy of the static data member is created, regardless of how many objects are instantiated.
    // 3. Use case for class-wide data: Static members are useful for tracking counts or some shared resources across all instances.

    // REAL-LIFE SCENARIO: TEA STALL EXAMPLE
    // ====================================
    // In a tea stall, each tea seller (object) can serve tea to customers, but we want to keep track of the total number of cups sold across all tea sellers.
    // Since the total cups sold is common for all tea sellers, we can use a static data member to keep track of this total.

    TeaStall seller1, seller2; // Create two instances (objects) of the TeaStall class

    int cups;

    // Ask for the number of cups sold by seller 1 and update total cups sold
    cout << "Enter the number of cups sold by seller 1: ";
    cin >> cups;
    seller1.serveTea(cups); // Seller 1 serves the tea, updating the total cups sold

    // Ask for the number of cups sold by seller 2 and update total cups sold
    cout << "Enter the number of cups sold by seller 2: ";
    cin >> cups;
    seller2.serveTea(cups); // Seller 2 serves the tea, updating the total cups sold

    // Display the total cups sold across all sellers
    TeaStall::displayTotalCupsSold(); // Call the static method to display the total

    return 0;
}

// static methods only access static member variables
// Answer: https://shorturl.at/Q7EuK
// Question: Can non-static methods access the static member variable?
// Answer: https://shorturl.at/rHMli
