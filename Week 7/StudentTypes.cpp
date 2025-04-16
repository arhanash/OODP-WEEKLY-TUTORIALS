#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0;  // Pure virtual function
};

class Undergraduate : public Student {
public:
    void study() override {
        cout << "Undergraduate student studies general curriculum." << endl;
    }
};

class Postgraduate : public Student {
public:
    void study() override {
        cout << "Postgraduate student studies research-oriented topics." << endl;
    }
};

int main() {
    Student* s1 = new Undergraduate();
    Student* s2 = new Postgraduate();

    s1->study();
    s2->study();

    delete s1;
    delete s2;

    return 0;
}
