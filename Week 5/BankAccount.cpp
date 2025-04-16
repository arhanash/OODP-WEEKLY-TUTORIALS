#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor Overloading

    // Default constructor
    BankAccount() {
        accountNumber = "0000";
        balance = 0.0;
    }

    // Constructor with account number
    BankAccount(string accNum) {
        accountNumber = accNum;
        balance = 0.0;
    }

    // Constructor with account number and initial balance
    BankAccount(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // Function Overloading: Deposit
    void deposit(int amount) {
        balance += amount;
        cout << "Deposited (int): " << amount << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited (double): " << amount << endl;
    }

    // Function Overloading: Withdraw
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn (int): " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn (double): " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Operator Overloading: Compare two accounts based on balance
    bool operator>(const BankAccount& other) {
        return this->balance > other.balance;
    }

    void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1("1234", 5000.0);
    BankAccount acc2("5678", 3000.0);

    acc1.deposit(1500);          // deposit using int
    acc2.deposit(250.75);        // deposit using double

    acc1.withdraw(1000);         // withdraw using int
    acc2.withdraw(500.50);       // withdraw using double

    acc1.display();
    acc2.display();

    if (acc1 > acc2)
        cout << "Account 1 has more balance than Account 2." << endl;
    else
        cout << "Account 2 has more or equal balance than Account 1." << endl;

    return 0;
}
