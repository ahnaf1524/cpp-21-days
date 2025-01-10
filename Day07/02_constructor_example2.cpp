#include <iostream>
#include <string>
using namespace std;

/*
   REAL-LIFE EXAMPLE:
   In Bangladesh, people open bank accounts in institutions like Sonali Bank or BRAC Bank.
   Every account is initialized with specific details, such as the account holder's name, account type,
   and an initial deposit amount. This initialization process can be mapped to **constructors** in C++.

   PURPOSE OF CONSTRUCTORS:
   - Automatically initialize a bank account with default or specific details when created.
   - Ensure every account object has valid and consistent attributes.

   PROPERTIES OF CONSTRUCTORS:
   - Same name as the class.
   - No return type.
   - Called automatically during object creation.
   - Can have default values, accept arguments, or copy an existing account's details.
*/
class BankAccount
{
private:
    string accountHolder; // Name of the account holder
    string accountType;   // Type of account (e.g., Savings, Current)
    double balance;       // Initial balance in the account
public:
    // DEFAULT CONSTRUCTOR
    // Used when no specific details are provided during account creation.
    BankAccount()
    {
        accountHolder = "Unnamed";
        accountType = "Savings";
        balance = 0.0;
        cout << "Default Bank Account Created for " << accountHolder << ".\n";
    }
    // PARAMETERIZED CONSTRUCTOR
    // Used to initialize the account with specific details provided by the user.
    BankAccount(string holder, string type, double initialDeposit)
    {
        accountHolder = holder;
        accountType = type;
        balance = initialDeposit;
        cout << "Account created for " << accountHolder << " with " << accountType
             << " account and initial deposit of " << balance << " BDT.\n";
    }
    // COPY CONSTRUCTOR
    // Creates a new account by copying details from an existing account.
    BankAccount(const BankAccount &existingAccount)
    {
        accountHolder = existingAccount.accountHolder;
        accountType = existingAccount.accountType;
        balance = existingAccount.balance;
        cout << "Copied account for " << accountHolder << " with balance: "
             << balance << " BDT.\n";
    }
    // DISPLAY ACCOUNT DETAILS
    void displayDetails(void)
    {
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Type : " << accountType << endl;
        cout << "Balance : " << balance << endl;
    }
};
int main()
{
    // DEFAULT CONSTRUCTOR
    BankAccount account1; // No arguments passed, default constructor called
    account1.displayDetails();
    cout << "--------------------\n";
    // PARAMETERIZED CONSTRUCTOR
    BankAccount account2("Rahim", "Current", 50000.0);
    account2.displayDetails();
    cout << "--------------------\n";
    // COPY CONSTRUCTOR
    BankAccount account3 = account2;
    account3.displayDetails();
    return 0;
}

/*
   KEY TAKEAWAYS:
   1. Default Constructor: Used for accounts where no specific details are provided.
   2. Parameterized Constructor: Helps open accounts with custom details like the name, type, and deposit.
   3. Copy Constructor: Clones an existing account, maintaining the same details.
   4. Application in Bangladesh: This process resembles account creation in banks like Sonali Bank or Islami Bank.
   5. Real-World Analogy: Bank accounts are initialized properly before any transactions occur.
*/