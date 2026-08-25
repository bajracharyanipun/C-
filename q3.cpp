#include <iostream>
using namespace std;

namespace Metric
{
void kilometerToMeter(float km)
    {
    cout << km << " Kilometer =" << km * 1000 << " Meters" << endl;
    }
}
namespace Imperial
{

void mileToFeet(float mile)
{
cout << mile << " Mile=" << mile * 5280 << " Feet" << endl;
    }
}
int main()
{
Metric::kilometerToMeter(5);

Imperial::mileToFeet(2);

return 0;
}
