#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    // Constructor to initialize product details
    Product(int id, string name, double p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    // Function to calculate total price of the product
    double calculateTotalPrice() {
        return price * quantity;
    }

    // Function to get product details
    void productDetails() {
        cout << "Product ID: " << productID << "\n";
        cout << "Product Name: " << productName << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Quantity: " << quantity << "\n";
        cout << "Total Cost: $" << calculateTotalPrice() << "\n";
    }
};

// Function to display all products in the cart
void displayCart(Product cart[], int size) {
    cout << "\nShopping Cart Details:\n";
    for (int i = 0; i < size; i++) {
        cart[i].productDetails();
        cout << "-------------------------\n";
    }
}

int main() {
    // Creating an array of Product objects
    Product cart[] = {
        Product(101, "Laptop", 899.99, 1),
        Product(102, "Smartphone", 499.50, 2),
        Product(103, "Headphones", 79.99, 3)
    };
    
    int cartSize = sizeof(cart) / sizeof(cart[0]);
    
    // Display all products in the cart
    displayCart(cart, cartSize);
    
    return 0;
}