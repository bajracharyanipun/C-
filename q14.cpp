#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    char *p1 = str1;
    char *p2 = str2;

    // Move pointer to the end of the first string
    while (*p1 != '\0')
    {
        p1++;
    }

    // Space between the strings
    *p1 = ' ';
    p1++;

    // Copy the second string
    while (*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }

    // End the concatenated string
    *p1 = '\0';

    cout << "\nConcatenated String = " << str1 << endl;

    return 0;
}