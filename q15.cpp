#include <iostream>
using namespace std;

void updateSalary(float *salary, float bonus)
{
    *salary = *salary + bonus;
}

int main()
{
    float salary, bonus;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    updateSalary(&salary, bonus);

    cout << "\nUpdated Salary = " << salary << endl;

    return 0;
}