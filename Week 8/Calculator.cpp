#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }

    T subtract() {
        return a - b;
    }

    T multiply() {
        return a * b;
    }

    T divide() {
        return (b != 0) ? a / b : 0;
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << "Int Add: " << intCalc.add() << endl;
    cout << "Int Subtract: " << intCalc.subtract() << endl;
    cout << "Int Multiply: " << intCalc.multiply() << endl;
    cout << "Int Divide: " << intCalc.divide() << endl;

    Calculator<float> floatCalc(10.5f, 2.5f);
    cout << "\nFloat Add: " << floatCalc.add() << endl;
    cout << "Float Subtract: " << floatCalc.subtract() << endl;
    cout << "Float Multiply: " << floatCalc.multiply() << endl;
    cout << "Float Divide: " << floatCalc.divide() << endl;

    return 0;
}
