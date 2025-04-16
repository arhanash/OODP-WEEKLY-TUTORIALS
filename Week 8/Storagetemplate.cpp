#include <iostream>
using namespace std;

template <typename T>
class Storage {
    T value;
public:
    Storage(T v) {
        value = v;
    }

    void display() {
        cout << "Stored Value: " << value << endl;
    }
};

int main() {
    Storage<int> s1(100);
    Storage<float> s2(3.14f);
    Storage<string> s3("Template Class");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
