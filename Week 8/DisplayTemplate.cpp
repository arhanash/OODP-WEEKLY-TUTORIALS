#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    display(10);           // int
    display(3.14f);        // float
    display("Hello OOP");  // string (const char*)
    return 0;
}
