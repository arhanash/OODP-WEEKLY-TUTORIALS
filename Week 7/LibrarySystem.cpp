#include <iostream>
using namespace std;

class Book {
private:
    string name;
    float price;
public:
    Book(string n, float p) {
        name = n;
        price = p;
    }
    friend class Library;
};

class Library {
public:
    void book_price(Book b) {
        cout << "Book Name: " << b.name << endl;
        cout << "Book Price: ₹" << b.price << endl;
    }
};

int main() {
    Book b("OOP Concepts", 499.99);
    Library l;
    l.book_price(b);
    return 0;
}
