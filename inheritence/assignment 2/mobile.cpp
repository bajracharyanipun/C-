#include <iostream>
#include <string>
using namespace std;
 
class MobilePhone {
public:
    string brand;
    string model;
    double price;
    int storage;
 
    void displayDetails() {
        cout << "Brand   : " << brand << endl;
        cout << "Model   : " << model << endl;
        cout << "Price   : " << price << endl;
        cout << "Storage : " << storage << " GB" << endl;
        cout << "-----------------------------" << endl;
    }
};
 
int main() {
    MobilePhone p1;
    p1.brand = "Samsung";
    p1.model = "Galaxy S24";
    p1.price = 200000.00;
    p1.storage = 256;
 
    MobilePhone p2;
    p2.brand = "Apple";
    p2.model = "iPhone 15";
    p2.price = 200000.00;
    p2.storage = 128;
 
    MobilePhone p3;
    p3.brand = "OnePlus";
    p3.model = "12R";
    p3.price = 50099.50;
    p3.storage = 256;
 
    p1.displayDetails();
    p2.displayDetails();
    p3.displayDetails();
 
    return 0;
}
 