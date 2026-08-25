#include <iostream>
using namespace std;

// Inline function
inline int maxNum(int a, int b, int c)
{

if(a >= b && a >= c)
return a;
else if(b >= a && b >= c)
return b;
else

return c;

}

int main()
{
cout << "Maximum of (11, 10, 15):" << maxNum(11, 10,15) << endl;

cout << "Maximum of (40, 30, 35): " << maxNum(40, 30, 35) << endl;

cout << "Maximum of (5,8,12):" << maxNum(5,8,12) << endl;

return 0;
}
