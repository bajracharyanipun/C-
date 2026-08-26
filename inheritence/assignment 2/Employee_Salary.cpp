#include <iostream>
#include <string>
using namespace std;
 
class Employee {
public:
    string name;
    int employeeId;
    double basicSalary;
 
    // Constructor
    Employee(string name, int employeeId, double basicSalary) {
        this->name = name;
        this->employeeId = employeeId;
        this->basicSalary = basicSalary;
    }
 
    double calculateAllowance() {
        return basicSalary * 0.20; // 20% of basic salary
    }
 
    double calculateTax() {
        return basicSalary * 0.10; // 10% of basic salary
    }
 
    double calculateNetSalary() {
        return basicSalary + calculateAllowance() - calculateTax();
    }
 
    void display() {
        cout << "Name         : " << name << endl;
        cout << "Employee ID  : " << employeeId << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Allowance    : " << calculateAllowance() << endl;
        cout << "Tax          : " << calculateTax() << endl;
        cout << "Net Salary   : " << calculateNetSalary() << endl;
        cout << "-----------------------------" << endl;
    }
};
 
int main() {
    Employee e1("Suman Poudel", 3001, 40000);
    Employee e2("Anita Magar", 3002, 55000);
 
    e1.display();
    e2.display();
 
    return 0;
}