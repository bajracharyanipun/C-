#include <iostream>
using namespace std;

// Global variable
int globalCount = 0;

void counter()
{
    // Automatic variable
    int automatic = 0;

    // Static variable
    static int staticCount = 0;

    automatic++;
    staticCount++;
    globalCount++;

    cout << "Automatic Variable = " << automatic << endl;
    cout << "Static Variable = " << staticCount << endl;
    cout << "Global Variable = " << globalCount << endl;

    cout << "--------------------------" << endl;
}

int main()
{
    counter();
    counter();
    counter();

    return 0;
}