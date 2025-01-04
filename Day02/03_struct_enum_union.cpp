#include <iostream>
#include <cstring> // For strcpy
using namespace std;

// Union: Represents one type of item in an order (pizza size, drink volume, or dessert weight)
union Order
{
    int pizzaSize;       // Size of pizza in inches
    float drinkVolume;   // Volume of drink in milliliters
    float dessertWeight; // Weight of dessert in grams
};

// Struct: Groups customer order details together
struct RestaurantOrder
{
    string customerName; // Name of the customer
    string orderType;    // Type of order: "Pizza", "Drink", or "Dessert"
    Order item;          // The actual item ordered, stored in a union
};

// Enum: Represents book status
enum BookStatus
{
    Available, // Value 0
    Issued     // Value 1
};

// Union: Represents additional book details (only one is used at a time)
union BookDetails
{
    char borrowerName[50]; // Name of the borrower (if issued)
    int rackNumber;        // Rack number (if available)
};

// Struct: Represents a book in the library
struct Book
{
    int id;              // Unique ID of the book
    string title;        // Title of the book
    string author;       // Author of the book
    string category;     // Book category (e.g., Programming)
    BookStatus status;   // Status: Available or Issued
    BookDetails details; // Additional details based on status
};

// Function to display book details
void displayBook(Book *book)
{
    cout << "Book ID: " << book->id << "\n"
         << "Title: " << book->title << "\n"
         << "Author: " << book->author << "\n"
         << "Category: " << book->category << "\n"
         << "Status: " << (book->status == Available ? "Available" : "Issued") << "\n";

    // Display additional details based on book status
    if (book->status == Available)
    {
        cout << "Rack Number: " << book->details.rackNumber << "\n";
    }
    else if (book->status == Issued)
    {
        cout << "Borrower Name: " << book->details.borrowerName << "\n";
    }
    cout << "------------------------------------\n";
}
// Unions:
// A union is used to store one of many possible types at a time.
// For example, in the restaurant example, a customer can order either a pizza, drink, or dessert, but not all three at once.
// A union is memory-efficient because all its members share the same memory.

// Structs:
// Structs are used to group related data together.
// Each member of a struct has its own memory, so it can store all members at the same time.

// Enums:
// Enums create a new data type with a set of named values, making the code more readable.
// For example, BookStatus can have values like Available or Issued.

int main()
{
    // ----- Restaurant Orders -----
    // Order 1: Pizza
    RestaurantOrder order1;
    order1.customerName = "Rahat";
    order1.orderType = "Pizza";
    order1.item.pizzaSize = 12; // 12-inch pizza

    // Order 2: Drink
    RestaurantOrder order2;
    order2.customerName = "Rifat";
    order2.orderType = "Drink";
    order2.item.drinkVolume = 500.0; // 500 ml drink

    // Order 3: Dessert
    RestaurantOrder order3;
    order3.customerName = "Sifat";
    order3.orderType = "Dessert";
    order3.item.dessertWeight = 250.0; // 250 grams dessert

    // Display orders
    cout << "Customer: " << order1.customerName << ", Order: " << order1.orderType
         << ", Details: " << order1.item.pizzaSize << " inch pizza\n";

    cout << "Customer: " << order2.customerName << ", Order: " << order2.orderType
         << ", Details: " << order2.item.drinkVolume << " ml drink\n";

    cout << "Customer: " << order3.customerName << ", Order: " << order3.orderType
         << ", Details: " << order3.item.dessertWeight << " grams dessert\n";

    // ----- Library System -----
    Book *library = new Book[2]; // Dynamically allocate memory for 2 books

    // Book 1: Available
    library[0].id = 101;
    library[0].title = "C++ Programming";
    library[0].author = "Bjarne Stroustrup";
    library[0].category = "Programming";
    library[0].status = Available;
    library[0].details.rackNumber = 5;

    // Book 2: Issued
    library[1].id = 102;
    library[1].title = "Clean Code";
    library[1].author = "Robert C. Martin";
    library[1].category = "Software Development";
    library[1].status = Issued;
    strcpy(library[1].details.borrowerName, "Alice"); // Copy borrower's name

    // Display book details (pointer and function)
    for (int i = 0; i < 2; ++i)
    {
        displayBook(&library[i]);
    }
    // Display book details (using loops)
    for (int i = 0; i < 2; ++i)
    {
        cout << "Book ID: " << library[i].id << "\n"
             << "Title: " << library[i].title << "\n"
             << "Author: " << library[i].author << "\n"
             << "Category: " << library[i].category << "\n"
             << "Status: " << (library[i].status == Available ? "Available" : "Issued") << "\n";
        if (library[i].status == Available)
        {
            cout << "Rack Number: " << library[i].details.rackNumber << "\n";
        }
        else if (library[i].status == Issued)
        {
            cout << "Borrower Name: " << library[i].details.borrowerName << "\n";
        }
        cout << "------------------------------------\n";
    }
    // Free allocated memory
    delete[] library;

    // ----- Enum Example -----
    enum Meal
    {
        Breakfast,
        Lunch,
        Dinner
    }; // Enum for meals
    cout << "Enum values: Breakfast = " << Breakfast << ", Lunch = " << Lunch
         << ", Dinner = " << Dinner << "\n";

    Meal myMeal = Lunch;
    cout << "My meal is " << (myMeal == Lunch ? "Lunch" : "Not Lunch") << "\n";

    return 0;
}
// typedef is not needed in C++
// Use it only in C

// 1 => true
// 0 => false

// Directly create your own data types using enums

// Always use char[] instead of string inside unions
