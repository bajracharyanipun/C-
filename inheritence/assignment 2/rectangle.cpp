#include <iostream>
#include <string>
using namespace std;
 
class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;
 
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
    BankAccount acc;
    acc.accountNumber = "AC1001";
    acc.accountHolder = "Nabin Karki";
    acc.balance = 5000;
 
    acc.displayBalance();
 
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.withdraw(10000); // should fail - insufficient balance
    acc.deposit(-500);   // should fail - invalid amount
 
    acc.displayBalance();
 
    return 0;
}