#include <iostream>
using namespace std;

int& maxRef(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a = 50;
    int b = 80;

    cout << "Before Modification" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    maxRef(a, b) = 100;

    cout << "\nAfter Modification" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}