#include <iostream>
#include <string>
using namespace std;
 
class Book {
public:
    string title;
    string author;
    double price;
 
    // Parameterized constructor
    Book(string title, string author, double price) {
        this->title = title;
        this->author = author;
        this->price = price;
    }
 
    void display() {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
        cout << "-----------------------------" << endl;
    }
 
    void applyDiscount(double percent) {
        double discountAmount = price * (percent / 100);
        price = price - discountAmount;
    }
};
 
int main() {
    Book b1("The Alchemist", "Paulo Coelho", 1200);
    Book b2("Atomic Habits", "James Clear", 1500);
    Book b3("1984", "George Orwell", 900);
 
    cout << "Before Discount:" << endl;
    b1.display();
    b2.display();
    b3.display();
 
    b1.applyDiscount(10); // 10% discount
    b2.applyDiscount(20); // 20% discount
    b3.applyDiscount(15); // 15% discount
 
    cout << "After Discount:" << endl;
    b1.display();
    b2.display();
    b3.display();
 
    return 0;
}