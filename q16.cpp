#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int *ptr = &arr[4];

    cout << "\nArray in Reverse Order:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr--;
    }

    return 0;
}