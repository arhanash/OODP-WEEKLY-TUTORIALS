#include <iostream>
using namespace std;

inline float add(float a, float b) {
    return a + b;
}

inline float subtract(float a, float b) {
    return a - b;
}

inline float multiply(float a, float b) {
    return a * b;
}

inline float divide(float a, float b) {
    return b != 0 ? a / b : 0;
}

int main() {
    float x = 10, y = 5;
    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;
    return 0;
}
