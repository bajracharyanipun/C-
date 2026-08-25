#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    int *ptr = &num;

    int **dptr = &ptr;

    cout << "Using Variable" << endl;
    cout << "Value = " << num << endl;
    cout << "Address = " << &num << endl;

    cout << "\nUsing Pointer" << endl;
    cout << "Value = " << *ptr << endl;
    cout << "Address = " << ptr << endl;

    cout << "\nUsing Double Pointer" << endl;
    cout << "Value = " << **dptr << endl;
    cout << "Address = " << *dptr << endl;

    return 0;
}