#include<iostream>
using namespace std;
int sum(int a){
    int res=10;
    return(a+res);

}
int sum(int a,int b){
    int res= a+b;
    return(res);
}
int sum(int a,int b,int c){
    int res= a+b+c;
    return(res);
}
double sum(double a,double b){
    double res= a+b;
    return(res);
}
double sum(double a,double b,double c){
    double res= a+b+c;
    return(res);
}   
int main() {
    int a=10;
    int b=20;
    cout<<"sum of a and b is "<<sum(a,b)<<endl;
    cout<<"sum of a is "<<sum(a)<<endl;
    cout<<"sum of doubles is "<<sum(1.5, 2.5)<<endl;
    cout<<"sum of three integers is "<<sum(10, 20, 30)<<endl;
    cout<<"sum of three doubles is "<<sum(1.5, 2.5, 3.5)<<endl;
    return 0;
}