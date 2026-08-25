#include <iostream>
#include <cmath>
using namespace std;

// Circle
float area(float radius)
{
return 3.1416 * radius * radius;
}
// Rectangle
int area(int length, int breadth)
{
return length * breadth;
}
// Triangle using Heron's Formula
float area(float a, float b, float c)
{

float s = (a + b + c) / 2;

return sqrt(s * (s - a) * (s - b) *(s -c));

}

int main()
{
cout << "Area of Circle = " << area(5.0f) << endl;

cout << "Area of Rectangle = " << area(6,4) << endl;

cout << "Area of Triangle =" << area(3.0f,4.0f,5.0f) << endl;

return 0;
}
