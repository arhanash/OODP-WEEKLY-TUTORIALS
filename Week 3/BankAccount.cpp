#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string accName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accName;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    // Display account details
    void display() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolderName << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

int main() {
    // Creating a bank account object
    BankAccount account(1001, "John Doe", 500.0);
    
    // Display initial account details
    account.display();
    
    // Perform transactions
    account.deposit(200.0);
    account.withdraw(100.0);
    account.withdraw(700.0); // Should display an insufficient balance message
    
    // Display final account details
    account.display();
    
    return 0;
}