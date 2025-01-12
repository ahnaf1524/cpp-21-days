#include <iostream>
#include <string>
using namespace std;

// TOPICS COVERED
//  1. How to run constructor in run time or dynamic object initialization?

// Class to represent "Bikroy" (Bangladeshi e-commerce for selling items)
class BikroyItem
{
private:
    string itemName;    // Name of the item
    int quantity;       // Quantity of the item
    float pricePerItem; // Price of each item
    float totalPrice;   // Total price calculation
public:
    // Default Constructor
    BikroyItem() {};
    // Constructor for float price per item (e.g., selling items with specific prices like 99.99 BDT)
    BikroyItem(string name, int qty, float price)
    {
        itemName = name;
        quantity = qty;
        pricePerItem = price;
        totalPrice = quantity * pricePerItem;
    }
    // Constructor for integer price per item (e.g., selling items with round prices like 100 BDT)
    BikroyItem(string name, int qty, int price)
    {
        itemName = name;
        quantity = qty;
        pricePerItem = float(price);
        totalPrice = quantity * pricePerItem;
    }
    // print() --> method
    void print(void)
    {
        cout << "Item : " << itemName << ", Quantity : " << quantity << ", Price per item : " << pricePerItem << ", Total Price: " << totalPrice << " BDT" << endl;
    }
};
int main()
{
    BikroyItem item1, item2;
    string name;
    int qty;
    float priceFloat;
    int priceInt;
    cout << "-----------------------------------\n";
    cout << "Enter item name , quantity , and price per item (float): ";
    cin >> name >> qty >> priceFloat;
    item1 = BikroyItem(name, qty, priceFloat); // Dynamic initialization with float price
    item1.print();
    cout << "-----------------------------------\n";
    cout << "Enter item name , quantity and price per item(integer) : ";
    cin >> name >> qty >> priceInt;
    item2 = BikroyItem(name, qty, priceInt); // Dynamic initialization with integer price
    item2.print();
    cout << "-----------------------------------\n";
    return 0;
}

// NOTES:
//  1. Dynamic initialization allows us to initialize objects at runtime.
//  2. Different constructors handle different input data types (float/int).
//  3. This approach is useful in real-world scenarios where inputs vary in type.

// CHARACTERISTICS OF DYNAMIC INITIALIZATION OF OBJECTS IN C++:
//  1. Flexibility: Objects can adapt to different data types and formats dynamically.
//  2. Multiple Constructors: Overloaded constructors handle varying inputs efficiently.
//  3. Runtime Determination: The program determines the constructor to call based on data type at runtime.
//  4. Practical Application: Essential for scenarios like price calculations, time durations, or measurement conversions.

// KEY TAKEAWAYS:
//  1. Use dynamic initialization to handle varied inputs dynamically and efficiently.
//  2. Overloading constructors improves program readability and maintainability.
//  3. Understand how runtime data affects the constructor selection process.

// FUNNY REAL-LIFE ANALOGY (Bangladesh Context):
// Imagine you're running a "Bikroy.com" shop. People buy "Hilsa fish" or "Jackfruit" in varying quantities, priced differently based on market rates.
// Someone asks for 2 pieces of Hilsa fish priced at 800 BDT each, while another asks for 3 kg of jackfruit at 50 BDT per kg.
// Dynamic initialization lets you calculate the total cost for both cases using relevant constructors dynamically, just like a smart shopkeeper!