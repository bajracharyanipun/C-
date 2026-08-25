#include <iostream>
using namespace std;

float amountCalc(float principal, float time, float rate = 2.5)
{
return principal + (principal * time * rate) / 100;

}

int main()
{
cout << "Using Default Rate (2.5%)" << endl;
cout << "Amount=" << amountCalc(11000, 3) << endl;

cout << "\nUsing User Rate (4%)" << endl;
cout << "Amount=" << amountCalc(15000, 3,5) << endl;

return 0;
}
