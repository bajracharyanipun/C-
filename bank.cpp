#include<iostream>
using namespace std;
class Bank{
    private:
    string customer_name;
    string account_number;
    double balance_amount;

    public:
    //constructor
    Bank(string name, string account, double bal){
        customer_name = name;
        account_number = account;
        balance_amount = bal;
    }

    string getCustomerName(){
        return customer_name;
    }

    string getAccountNumber(){
        return account_number;
    }

    double getBalance(){
        return balance_amount;
    }

};

int main(){
    Bank obj1("Nipun", "6543156789", 10000.50);
     cout << "Customer Name: " << obj1.getCustomerName() << endl;
    cout << "Account Number: " << obj1.getAccountNumber() << endl;
    cout << "Balance: " << obj1.getBalance() << endl;
    cout << "Depositing 1000..." << endl;
    obj1.deposit(1000);
    cout << "New Balance: " << obj1.getBalance() << endl;
    cout << "Withdrawing 2000..." << endl;
    obj1.withdraw(2000);
    cout << "New Balance: " << obj1.getBalance() << endl;
    return 0;
}