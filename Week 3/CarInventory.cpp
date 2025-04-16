#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;
    int year;
    static int totalCars;

public:
    // Constructor to initialize car details
    Car(string b, string m, double p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        totalCars++;
    }

    // Function to display car details
    void displayCarInfo() {
        cout << "Brand: " << brand << "\n";
        cout << "Model: " << model << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Year: " << year << "\n";
    }

    // Static function to get total cars
    static int getTotalCars() {
        return totalCars;
    }
};

// Initialize static member
int Car::totalCars = 0;

int main() {
    // Creating multiple car objects
    Car car1("Toyota", "Camry", 30000, 2022);
    Car car2("Honda", "Civic", 25000, 2023);
    Car car3("Ford", "Mustang", 55000, 2021);
    
    // Displaying car details
    car1.displayCarInfo();
    cout << "-------------------------\n";
    car2.displayCarInfo();
    cout << "-------------------------\n";
    car3.displayCarInfo();
    
    // Display total number of cars
    cout << "\nTotal Cars in Inventory: " << Car::getTotalCars() << "\n";
    
    return 0;
}
