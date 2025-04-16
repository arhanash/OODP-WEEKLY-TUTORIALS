#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
public:
    void setSubject(string s) {
        subject = s;
    }
    void displaySubject() {
        cout << "Subject: " << subject << endl;
    }
};

class Professor : public Teacher {
    string department;
public:
    void setDepartment(string d) {
        department = d;
    }
    void displayDepartment() {
        cout << "Department: " << department << endl;
    }

    void displayAll() {
        displayName();
        displaySubject();
        displayDepartment();
    }
};

int main() {
    Professor p;
    p.setName("Dr. Sharma");
    p.setSubject("Physics");
    p.setDepartment("Science");
    p.displayAll();
    return 0;
}
