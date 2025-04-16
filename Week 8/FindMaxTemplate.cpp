#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max (int): " << findMax(10, 20) << endl;
    cout << "Max (float): " << findMax(5.5f, 2.3f) << endl;
    cout << "Max (double): " << findMax(8.123, 8.321) << endl;
    return 0;
}
