#include <iostream>
#include <string>
using namespace std;
 
class Employee {
public:
    string name;
    int employeeId;
    double salary;
 
    void display() {
        cout << "Name        : " << name << endl;
        cout << "Employee ID : " << employeeId << endl;
        cout << "Salary      : " << salary << endl;
        cout << "-----------------------------" << endl;
    }
};
 
int main() {
    Employee e1;
    e1.name = "Ram Bahadur";
    e1.employeeId = 1001;
    e1.salary = 45000;
 
    Employee e2;
    e2.name = "Sita Gurung";
    e2.employeeId = 1002;
    e2.salary = 52000;
 
    Employee e3;
    e3.name = "Hari Thapa";
    e3.employeeId = 1003;
    e3.salary = 60000;
 
    e1.display();
    e2.display();
    e3.display();
 
    return 0;
}