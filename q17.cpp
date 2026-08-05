#include <iostream>
using namespace std;

int main()
{
    float number;

    cout << "Enter a floating point number: ";
    cin >> number;

    // Implicit conversion
    int implicitValue = number;

    int choice;

    cout << "\n1. Perform Explicit Type Cast" << endl;
    cout << "2. View Implicitly Truncated Value" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "\nExplicit Conversion using static_cast<int> = "
                 << static_cast<int>(number);
            break;

        case 2:
            cout << "\nImplicitly Converted Value = "
                 << implicitValue;
            break;

        default:
            cout << "\nInvalid Choice";
    }

    return 0;
}