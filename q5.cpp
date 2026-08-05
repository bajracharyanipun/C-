#include <iostream>
using namespace std;

int main()
{
int n;

cout << "Enter size of array: ";
cin >> n;

int *arr = new int[n];

int sum = 0;

cout << "Enter elements:\n";

for(int i= 0; i < n; i++)
{
cin >> arr[i];
sum += arr[i];
}
float average = (float)sum / n;

cout << "\nSum=" << sum << endl;
cout << "Average =" << average << endl;

delete[] arr;

return 0;
}
