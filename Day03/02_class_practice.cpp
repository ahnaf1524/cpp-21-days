// ### Practice Task: Library Management System

// Create a **Library Management System** using C++ classes. The system should allow managing books and members of a library.

// ---

// ### Requirements:
// 1. **Class: `Book`**
//    - **Private members**:
//      - `string title` (Title of the book)
//      - `string author` (Author's name)
//      - `bool isAvailable` (Availability status of the book)
//    - **Public methods**:
//      - Constructor to initialize the book.
//      - Method `displayInfo()` to show book details.
//      - Method `borrowBook()` to mark the book as borrowed (set `isAvailable` to `false`).
//      - Method `returnBook()` to mark the book as returned (set `isAvailable` to `true`).

// ---

// 2. **Class: `LibraryMember`**
//    - **Private members**:
//      - `string memberName` (Name of the library member)
//      - `int memberID` (Unique ID for each member)
//      - `int booksBorrowed` (Count of books borrowed by the member)
//    - **Public methods**:
//      - Constructor to initialize the member details.
//      - Method `displayMemberInfo()` to show member details.
//      - Method `borrowBook()` to increment `booksBorrowed` (check if the member can borrow more books, e.g., max 5 books).
//      - Method `returnBook()` to decrement `booksBorrowed`.

// ---

// 3. **Class: `Library`**
//    - **Private members**:
//      - Array or vector of `Book` objects (store a list of books in the library).
//      - Array or vector of `LibraryMember` objects (store a list of members).
//    - **Public methods**:
//      - Method `addBook()` to add a new book to the library.
//      - Method `addMember()` to register a new member.
//      - Method `borrowBook()` to allow a member to borrow a book (check availability and member borrowing limit).
//      - Method `returnBook()` to handle returning a book.
//      - Method `displayLibraryInfo()` to show all books and their availability.

// ---

// ### Example Tasks to Complete:
// 1. Add 5 books to the library.
// 2. Register 3 members.
// 3. Borrow a book for a member.
// 4. Return a book for a member.
// 5. Display details of all books and members.

// ---

// This task will give you practice with:
// - Constructors
// - Encapsulation (using private members)
// - Accessing and modifying private data through methods
// - Interacting between objects (e.g., borrowing books from the library)

// Read chatgpt response : https://chatgpt.com/share/677a1727-3338-8004-9d8c-9ed17328952c

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    bool isAvailable;
    string borrowerName;

public:
    int id;
    float price;
    string category;
    // Constructor to initialize the class
    Book(string bookTitle, string bookAuthor, bool bookIsAvailable, float bookPrice, string bookCategory)
    {
        title = bookTitle;
        author = bookAuthor;
        isAvailable = bookIsAvailable;
        price = bookPrice;
        category = bookCategory;
    }
    // method for showing book details
    void getBookDetails()
    {
        cout << "======================" << endl;
        cout << "Book Title : " << title << endl;
        cout << "Book Author : " << author << endl;
        cout << "Category : " << category << endl;
        cout << "status : " << (isAvailable ? "In Stock" : "Stock Out") << endl;
        cout << "Price : $" << price << endl;
        if (isAvailable == false)
        {
            cout << "Borrower Name : " << borrowerName << endl;
        }
        cout << "======================" << endl;
    }
    // Method for borrow book
    // void Book::borrowBook(string borrowerName);
    void borrowBook(string borrowerName)
    {
        if (isAvailable)
        {
            this->borrowerName = borrowerName; // access my member variables
            isAvailable = false;
            cout << "Book borrowed successfully by " << borrowerName << "!" << endl;
        }
        else
        {
            cout << "Sorry, the book is currently unavailable!" << endl;
        }
    }
    // Method for return book
    // void Book::returnBook();
    void returnBook()
    {
        if (!isAvailable)
        {
            isAvailable = true;
            borrowerName = " ";
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "The book is already available!" << endl;
        }
    }
};
// void Book::borrowBook(string borrowerName)
// {
//     borrowerName = borrowerName;
//     isAvailable = false;
// }
// void Book::returnBook()
// {
//     isAvailable = true;
// }
int main()
{
    Book book1("Competitive Programmer\'s Handbook", "Anti Leakson", true, 84.99, "Computer Science");
    Book book2("Habluder Jonno Programming", "Jhankar Mahbub", true, 4.99, "Computer Science");
    book1.getBookDetails();
    cout << endl;
    book2.getBookDetails();
    return 0;
}