#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    int *ptr = arr;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest)
            largest = *(ptr + i);

        if (*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }

    cout << "\nLargest Element = " << largest << endl;
    cout << "Smallest Element = " << smallest << endl;

    return 0;
}