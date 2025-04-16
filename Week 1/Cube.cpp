#include <iostream>

using namespace std;

int main() {
    int num;
    
    while (true) {
        // Taking input
        cout << "Enter a number: ";
        cin >> num;
        
        // Check exit condition
        if (num % 2 == 0 && num % 3 == 0) {
            cout << "EXIT" << endl;
            break;
        }
        
        // Calculating and displaying cube
        cout << "Cube of " << num << " is: " << (num * num * num) << endl;
    }
    
    return 0;
}