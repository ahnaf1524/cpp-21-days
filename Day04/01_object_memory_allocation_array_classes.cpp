#include <iostream>
using namespace std;

// 1. Static Memory Allocation: Represents a simple **Library** with books on the shelf.
class Library
{
private:
    string books[5]; // Array to store the titles of 5 books (static memory allocation)

public:
    // Constructor to initialize the book titles from user input.
    Library()
    {
        cout << "Enter the titles of 5 books in the library:" << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Book " << (i + 1) << ": ";
            getline(cin, books[i]); // Take input for each book title
        }
    }

    // Method to display all books in the library.
    void displayBooks()
    {
        cout << "\nBooks in the Library:" << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << (i + 1) << ". " << books[i] << endl;
        }
    }
};

// 2. Dynamic Memory Allocation: Represents a **ParkingLot** where the number of cars can vary.
class ParkingLot
{
private:
    string *cars; // Pointer to a dynamically allocated array of car models
    int numCars;  // Number of cars in the parking lot

public:
    // Constructor: Allocates memory for cars dynamically based on user input.
    ParkingLot(int carsCount)
    {
        numCars = carsCount;
        cars = new string[numCars]; // Dynamically allocating memory for cars array
        cout << "Parking lot created with " << numCars << " spaces." << endl;
        takeCarInput();
    }

    // Destructor: Frees the dynamically allocated memory for the cars array.
    ~ParkingLot()
    {
        delete[] cars; // Memory must be freed manually
        cout << "Parking lot destroyed and memory freed." << endl;
    }

    // Method to take input for car models.
    void takeCarInput()
    {
        for (int i = 0; i < numCars; ++i)
        {
            cout << "Enter car model for space " << (i + 1) << ": ";
            getline(cin, cars[i]); // Take input for each car model
        }
    }

    // Method to display all the cars in the parking lot.
    void displayCars()
    {
        cout << "\nCars in the Parking Lot:" << endl;
        for (int i = 0; i < numCars; ++i)
        {
            cout << (i + 1) << ". " << cars[i] << endl;
        }
    }
};

// 3. Array in Classes: Represents a **University** with multiple departments and their student counts.
class University
{
private:
    int *studentCounts; // Pointer to a dynamically allocated array storing student counts for departments
    int numDepartments; // Number of departments in the university

public:
    // Constructor: Initializes the university with a specified number of departments.
    University(int departments)
    {
        numDepartments = departments;
        studentCounts = new int[numDepartments]; // Dynamically allocating memory for student counts array
        cout << "University created with " << numDepartments << " departments." << endl;
        takeStudentCountInput();
    }

    // Destructor: Frees the dynamically allocated memory for student counts array.
    ~University()
    {
        delete[] studentCounts; // Memory must be freed manually
        cout << "University destroyed and memory freed." << endl;
    }

    // Method to take input for student counts in each department.
    void takeStudentCountInput()
    {
        for (int i = 0; i < numDepartments; ++i)
        {
            cout << "Enter the number of students in Department " << (i + 1) << ": ";
            cin >> studentCounts[i]; // Take input for student count in each department
        }
        cin.ignore(); // To ignore the newline character left in the input buffer after taking integer input
    }

    // Method to display the number of students in each department.
    void displayStudentCounts()
    {
        cout << "\nStudent counts in the University Departments:" << endl;
        for (int i = 0; i < numDepartments; ++i)
        {
            cout << "Department " << (i + 1) << ": " << studentCounts[i] << " students" << endl;
        }
    }

    // Getter for the number of departments
    int getNumDepartments() const
    {
        return numDepartments;
    }

    // Getter for the student count in a particular department
    int getStudentCount(int departmentIndex) const
    {
        if (departmentIndex >= 0 && departmentIndex < numDepartments)
            return studentCounts[departmentIndex];
        return -1; // Invalid index
    }

    // Setter for the student count in a particular department
    void setStudentCount(int departmentIndex, int count)
    {
        if (departmentIndex >= 0 && departmentIndex < numDepartments)
        {
            studentCounts[departmentIndex] = count;
        }
    }
};

int main()
{
    // 1. Static Memory Allocation: Library
    Library myLibrary;        // The constructor will prompt the user for input
    myLibrary.displayBooks(); // Display books in the static array

    // 2. Dynamic Memory Allocation: ParkingLot
    int parkingSpaces;
    cout << "Enter the number of parking spaces: ";
    cin >> parkingSpaces;
    cin.ignore();                           // Ignore any leftover newline character
    ParkingLot myParkingLot(parkingSpaces); // Create a parking lot with user-defined spaces
    myParkingLot.displayCars();             // Display cars in the dynamic array

    // 3. Array in Classes: University
    int departments;
    cout << "Enter the number of departments in the university: ";
    cin >> departments;
    cin.ignore();                         // Ignore any leftover newline character
    University myUniversity(departments); // Create a university with user-defined departments
    myUniversity.displayStudentCounts();  // Display student counts for each department

    // Access private members via public methods
    int deptIndex = 1; // Example department index (0-based)
    cout << "\nGetting the student count for department " << deptIndex + 1 << ": "
         << myUniversity.getStudentCount(deptIndex) << " students" << endl;

    // Modifying the student count for a department
    int newStudentCount = 900;
    myUniversity.setStudentCount(deptIndex, newStudentCount);
    cout << "After modification, the student count for department " << deptIndex + 1 << " is: "
         << myUniversity.getStudentCount(deptIndex) << " students" << endl;

    // No need to manually free memory in the main function; destructors will automatically handle it.

    return 0;
}
