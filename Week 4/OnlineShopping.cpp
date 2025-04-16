#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    // Default Constructor
    Product() {
        productID = 0;
        productName = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    // Parameterized Constructor
    Product(int id, string name, float p, int qty) {
        productID = id;
        productName = name;
        price = p;
        quantity = qty;
    }

    // Function to Calculate Total Price
    float calculateTotalPrice() {
        return price * quantity;
    }

    // Function to Display Product Details
    void displayProductInfo() {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << calculateTotalPrice() << endl;
        cout << "-----------------------------" << endl;
    }

    // Destructor
    ~Product() {
        cout << "Product \"" << productName << "\" removed from memory." << endl;
    }
};

// Function to Display All Products in the Cart
void displayCart(Product cart[], int size) {
    cout << "Shopping Cart Details:" << endl;
    for (int i = 0; i < size; i++) {
        cart[i].displayProductInfo();
    }
}

int main() {
    // Creating an array of Product objects (Shopping Cart)
    Product cart[3] = {
        Product(101, "Laptop", 850.99, 1),
        Product(102, "Smartphone", 499.49, 2),
        Product(103, "Headphones", 99.99, 3)
    };

    // Display Cart Details
    displayCart(cart, 3);

    return 0;
}
