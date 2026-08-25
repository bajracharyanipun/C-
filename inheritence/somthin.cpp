#include<iostream>
using namespace std;
class person{
    string name;
    int age;

public:
    person(string n, int a) {
        this->name = name;
    this->age = age;
    }
    
protected:
    string getName() 
{
        return name;
    }
    int getAge() {
        return age;
    }
    float getSalary() {
        return salary;
    }
};
class employee : public person {
    float salary;
public:
    Employee(string name,int age, float sal ) : person(name, age), salary(sal) {}
    void  getinfo(){
        cout<<"Name"<< this-> getName()<<endl;
        cout<<"Age"<< this-> getAge()<<endl;
        cout<<"Salary"<< this-> getSalary()<<endl;
    }
};
int main(){
    Employee obj("Nipun", 30, 50000.0);
    obj.getinfo();
    return 0;
}
