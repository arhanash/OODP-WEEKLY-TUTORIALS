#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    // Default Constructor
    Book() {
        bookID = 0;
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized Constructor
    Book(int id, string t, string a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    // Function to Display Book Information
    void displayBookInfo() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Creating books using default constructor
    Book book1;
    cout << "Book Created Using Default Constructor:" << endl;
    book1.displayBookInfo();

    // Creating books using parameterized constructor
    Book book2(101, "The Great Gatsby", "F. Scott Fitzgerald", 10.99);
    Book book3(102, "To Kill a Mockingbird", "Harper Lee", 12.50);
    Book book4(103, "1984", "George Orwell", 15.75);

    cout << "Books Created Using Parameterized Constructor:" << endl;
    book2.displayBookInfo();
    book3.displayBookInfo();
    book4.displayBookInfo();

    return 0;
}
