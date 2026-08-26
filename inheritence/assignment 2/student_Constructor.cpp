#include <iostream>
#include <string>
using namespace std;
 
class Student {
public:
    string name;
    int rollNo;
    string program;
 
    // Parameterized constructor
    Student(string name, int rollNo, string program) {
        this->name = name;
        this->rollNo = rollNo;
        this->program = program;
    }
 
    void display() {
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Program : " << program << endl;
        cout << "-----------------------------" << endl;
    }
};
 
int main() {
    Student s1("Sujata Rai", 201, "BSc Computer Science");
    Student s2("Bikash Shrestha", 202, "BBA");
 
    s1.display();
    s2.display();
 
    return 0;
}