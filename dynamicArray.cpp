
#include<iostream>
using namespace std;
int main() {
int a=10 ;
int *b= new int(10);
float *c= new float(2.75);
cout<<"b= "<<*b << "\n" "c="<<*c << endl;
delete b ;
delete c;
    return 0;
}