#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float bill;
    cout << "Enter total bill amount:";
    cin >> bill;
cout << "\nFormatted Bill Amount\n";
cout << setw(12)
<< setfill('*')
<< fixed
<< setprecision(2)
<< showpoint
<< bill;

return 0;
}
