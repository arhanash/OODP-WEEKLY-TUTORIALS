#include <iostream>

using namespace std;

int countDigits(int num) {
    if (num == 0) return 1; // Handle case where product is 0
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num1, num2;
    
    // Taking input
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    // Calculating product
    int product = num1 * num2;
    
    // Counting digits in the product
    int digitCount = countDigits(product);
    
    // Displaying results
    cout << "Product - " << product << endl;
    cout << "Count of digits - " << digitCount << endl;
    
    return 0;
}