#include <iostream>
using namespace std;

class AccountB; // Forward declaration of class AccountB

class AccountA
{
    int balance; // Meaningful variable name

public:
    void setBalance(int amount)
    {
        balance = amount;
    }
    void displayBalance() const
    {
        cout << "Account A Balance: " << balance << endl;
    }
    friend void exchangeBalances(AccountA &accA, AccountB &accB); // Friend function declaration
};

class AccountB
{
    int balance; // Meaningful variable name

public:
    void setBalance(int amount)
    {
        balance = amount;
    }
    void displayBalance() const
    {
        cout << "Account B Balance: " << balance << endl;
    }
    friend void exchangeBalances(AccountA &accA, AccountB &accB); // Friend function declaration
};

// Friend function to exchange balances between two accounts
void exchangeBalances(AccountA &accA, AccountB &accB)
{
    int temp = accA.balance;
    accA.balance = accB.balance;
    accB.balance = temp;
}

int main()
{
    AccountA accA;
    AccountB accB;

    // Set initial balances
    accA.setBalance(1000);
    accB.setBalance(2000);

    cout << "Before Exchange:" << endl;
    accA.displayBalance();
    accB.displayBalance();

    // Exchange balances
    exchangeBalances(accA, accB);

    cout << "\nAfter Exchange:" << endl;
    accA.displayBalance();
    accB.displayBalance();

    return 0;
}
