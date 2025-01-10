#include <iostream>
#include <string>
using namespace std;
/*
   REAL-LIFE EXAMPLE: Bank Account Management
   - The `BankAccount` class represents a user's bank account.
   - Overloaded constructors allow creating accounts with different levels of details:
     1. Account number only.
     2. Account number and owner's name.
     3. Account number, owner's name, and initial balance.
*/
class BankAccount
{
private:
    string accountNumber; // Account number
    string ownerName;     // Owner's name
    double balance;       // Initial balance

public:
    // Constructor 1: Initializes account with account number only
    BankAccount(string accNumber)
    {
        accountNumber = accNumber;
        ownerName = "Unknown";
        balance = 0.0;
        cout << "Account Created with account number : " << accountNumber << endl;
    }
    // Constructor 2: Initializes account with account number and owner's name
    BankAccount(string accNumber, string name)
    {
        accountNumber = accNumber;
        ownerName = name;
        balance = 0.0;
        cout << "Account Created for " << ownerName << " with account number : " << accountNumber << endl;
    }
    // Constructor 3: Initializes account with account number, owner's name, and initial balance
    BankAccount(string accNumber, string name, double initialBalance)
    {
        accountNumber = accNumber;
        ownerName = name;
        balance = initialBalance;
        cout << "Account created for " << ownerName << " with account number: "
             << accountNumber << " and initial balance: " << balance << " BDT" << endl;
    }
    // Method to display account details
    void displayAccountDetails()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Owner Name : " << ownerName << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    // Using Constructor 1: Account number only
    BankAccount account1("1234567890");
    account1.displayAccountDetails();
    cout << "-----------------------------------" << endl;
    // Using Constructor 2: Account number and owner's name
    BankAccount account2("9876543210", "Rahim");
    account2.displayAccountDetails();
    cout << "-----------------------------------" << endl;
    // Using Constructor 3: Account number, owner's name, and initial balance
    BankAccount account3("1122334455", "Karim", 5000.0);
    account3.displayAccountDetails();
    return 0;
}
/*
   NOTES ON CONSTRUCTOR OVERLOADING:
   1. **Definition**:
      - Constructor overloading means having multiple constructors with different parameter lists in a single class.

   2. **Key Characteristics**:
      - Constructors must have the same name as the class.
      - Each constructor must have a unique set of parameters.
      - Constructors are invoked automatically when an object is created.

   3. **Advantages**:
      - Flexibility in object initialization.
      - Code reusability by allowing multiple ways to create objects with varying data.

   4. **Real-Life Application**:
      - Example: A banking system where some customers provide only their account number, while others provide additional details like their name and initial deposit.

   5. **Important Notes**:
      - Default arguments can be used alongside constructor overloading.
      - Constructors cannot have a return type.

   REAL-LIFE SIGNIFICANCE:
   - Constructor overloading simplifies scenarios where objects need to be initialized with different levels of detail, enhancing code flexibility and readability.
*/