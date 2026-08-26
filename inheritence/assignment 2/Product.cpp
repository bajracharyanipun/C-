#include <iostream>
#include <string>
using namespace std;
 
class Product {
public:
    string productName;
    double price;
    int quantity;
 
    // Default constructor
    Product() {
        productName = "Unknown";
        price = 0;
        quantity = 0;
    }
 
    void display() {
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
    }
};
 
int main() {
    Product p1;
    p1.display();
 
    return 0;
}
 