#include <iostream>

using namespace std;

int main() {
    int num1, den1, num2, den2;
    char slash;
    
    // Taking input for first fraction
    cout << "Enter first fraction: ";
    cin >> num1 >> slash >> den1;
    
    // Taking input for second fraction
    cout << "Enter second fraction: ";
    cin >> num2 >> slash >> den2;
    
    // Calculating product of fractions
    int product_num = num1 * num2;
    int product_den = den1 * den2;
    
    // Displaying the result
    cout << "Product = " << product_num << "/" << product_den << endl;
    
    return 0;
}