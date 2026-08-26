#include <iostream>
#include <string>
using namespace std;
 
class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;
 
    // Parameterized constructor
    BankAccount(string accountNumber, string accountHolder, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }
 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
 
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance for withdrawal of " << amount << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
 
    void displayBalance() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
        cout << "-----------------------------" << endl;
    }
};
 
int main() {
    BankAccount acc("AC2001", "Priya Adhikari", 10000);
 
    acc.displayBalance();
    acc.deposit(3000);
    acc.withdraw(4500);
    acc.withdraw(50000); // insufficient balance
    acc.deposit(1200);
    acc.displayBalance();
 
    return 0;
}
 