#include <iostream>
#include <string>
using namespace std;

// FRIEND FUNCTION EXAMPLE

class BankAccount
{
private:
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) : accountHolderName(name), balance(initialBalance) {}

    // Function to display account details
    void displayAccountDetails() const
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Friend function declaration
    // Declaring transferFunds() as a friend of this class
    // This allows transferFunds() to access private members of BankAccount
    friend void transferFunds(BankAccount &sender, BankAccount &receiver, double amount);
};

// Friend function definition
// This function transfers funds from one account to another
// Why we use ampersand symbol & --> https://shorturl.at/9x5tM
void transferFunds(BankAccount &sender, BankAccount &receiver, double amount)
{
    if (amount > sender.balance)
    {
        cout << "Transfer failed: Insufficient balance in " << sender.accountHolderName << "'s account." << endl;
        return;
    }

    sender.balance -= amount;
    receiver.balance += amount;
    cout << "Transfer successful: $" << amount << " transferred from " << sender.accountHolderName << " to " << receiver.accountHolderName << "." << endl;
}

int main()
{
    string accountHolderName1;

    // Input for the first account holder's name
    cout << "(Account - 01) Enter your full name: ";
    getline(cin, accountHolderName1);

    // Creating bank accounts
    BankAccount account1(accountHolderName1, 5000.00);
    BankAccount account2("Bob", 6000.00);

    // Displaying initial account details
    cout << "\nInitial Account Details:" << endl;
    account1.displayAccountDetails();
    account2.displayAccountDetails();

    // Transferring funds from account1 to account2
    transferFunds(account1, account2, 200.00);

    // Displaying account details after transfer
    cout << "\nAccount Details After Transfer:" << endl;
    account1.displayAccountDetails();
    account2.displayAccountDetails();

    return 0;
}

/* Properties of Friend Functions:
1. A friend function is not a member of the class but can access its private and protected members.
2. It is not called using an object of the class. For example, `account1.transferFunds()` is invalid.
3. It can be called directly without using any object.
4. Friend functions usually take objects of the class as arguments.
5. They can be declared in either the public or private section of the class.
6. A friend function cannot directly access class members by their names; it needs to use `objectName.memberName`.
*/
