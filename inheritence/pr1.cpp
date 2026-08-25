#include<iostream>
using namespace std;
class A{
    public 
    int a;
    int b; 
    int geta(){
        return a; 
    }
    int getb(){
        return b; 
    }

};
class B : public A{
    int c;
    int getc(){
        return c; 
    }
};
int main(){
B obj; 
obj.a = 10;
obj.b = 20;
obj.c = 30;
cout<<"a="<<obj.geta()<<endl;
cout<<"b="<<obj.getb()<<endl;
cout<<"c="<<obj.getc()<<endl;
return 0;


}