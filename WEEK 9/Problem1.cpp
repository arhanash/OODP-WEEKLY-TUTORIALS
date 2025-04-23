#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0)
            throw "Division by zero not allowed!";
        cout << "Result: " << (numerator / denominator) << endl;
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
