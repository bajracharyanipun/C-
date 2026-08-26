#include <iostream>
#include <string>
using namespace std;
 
class Student {
public:
    string name;
    int idNo;
    string program;
 
    void display() {
        cout << "Name    : " << name << endl;
        cout << "ID No : " << idNo << endl;
        cout << "Program : " << program << endl;
    }
};
 
int main() {
    Student s1;
    s1.name = "Nipun Bajracharya";
    s1.idNo = 23456;
    s1.program = "BSCS";
 
    s1.display();
 
    return 0;
}
 