#include <iostream>
#include <string>
using namespace std;

class GroceryItem
{
private:
    string itemName; // Name of the grocery item
    double price;    // Price of the item
    int quantity;    // Quantity of the item

public:
    // Default constructor: Initializes the item with default values
    // In this case, itemName is "Unknown", price is 0, and quantity is 0
    GroceryItem() : itemName("Unknown"), price(0), quantity(0) {}

    // Parameterized constructor: Initializes the item with specified values
    // This constructor is used when you want to create an object with custom values.
    GroceryItem(string name, double p, int q) : itemName(name), price(p), quantity(q) {}

    // Method to calculate the total cost of the item
    // This multiplies the price of the item with its quantity
    double calculateTotalCost()
    {
        return price * quantity;
    }

    // Method to display the details of the item (name, price, quantity, total cost)
    void displayItemDetails(void)
    {
        cout << "Item: " << itemName << " , Price: " << price << ", Quantity: " << quantity << ", Total Cost: " << calculateTotalCost() << endl;
    }

    // Getter methods to access the private members (if needed later)
    // Why I use const here is the explanation ---> https://shorturl.at/7IDLT
    string getItemName() const { return itemName; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
};

// Function to calculate the total bill for all grocery items
// This function takes an array of GroceryItem objects and the number of items
double calculateTotalBill(GroceryItem items[], int size)
{
    double total = 0; // Variable to store the total bill
    for (int i = 0; i < size; ++i)
    {
        total += items[i].calculateTotalCost(); // Add the total cost of each item to the bill
    }
    return total; // Return the total bill
}

int main()
{
    int n; // Variable to store the number of items the user wants to buy

    // Ask the user for the number of grocery items they want to purchase
    cout << "Enter the number of grocery items: ";
    cin >> n;

    // Create an array of GroceryItem objects
    // This array will store the details of the grocery items
    GroceryItem items[n]; // Array of objects, where 'n' is the number of items

    // Input item details from the user
    for (int i = 0; i < n; ++i)
    {
        string name;  // Variable to store the name of the item
        double price; // Variable to store the price of the item
        int quantity; // Variable to store the quantity of the item

        cout << "Enter details for item " << i + 1 << ":\n"; // Print the prompt for the user

        // Input the item name from the user (using getline to include spaces)
        cout << "Item Name: ";
        cin.ignore();       // To ignore any leftover newline character from the previous input
        getline(cin, name); // Get the full item name (including spaces)

        // Input the price and quantity of the item
        cout << "Price: ";
        cin >> price;
        cout << "Quantity: ";
        cin >> quantity;

        // Create the GroceryItem object using the parameterized constructor
        // The object is created and stored in the array 'items' at index 'i'
        items[i] = GroceryItem(name, price, quantity);
    }

    // Display the details of all items
    cout << "\nGrocery Store Receipt:\n";
    for (int i = 0; i < n; ++i)
    {
        items[i].displayItemDetails(); // Display each item's details using the displayItemDetails method
    }

    // Calculate the total bill by passing the array of items to the calculateTotalBill function
    double totalBill = calculateTotalBill(items, n);
    cout << "\nTotal Bill: $" << totalBill << endl; // Display the total bill

    return 0; // End of the program
}
