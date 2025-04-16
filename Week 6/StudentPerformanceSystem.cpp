#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void setStudent(string n, int r) {
        name = n;
        rollNo = r;
    }
    void displayStudent() {
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
    }
};

class Marks : virtual public Student {
protected:
    int m1, m2, m3;
public:
    void setMarks(int a, int b, int c) {
        m1 = a; m2 = b; m3 = c;
    }
    int totalMarks() {
        return m1 + m2 + m3;
    }
    void displayMarks() {
        cout << "Academic Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total Academic Marks: " << totalMarks() << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportsMarks;
public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }
    void displaySports() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Result : public Marks, public Sports {
public:
    void displayResult() {
        displayStudent();
        displayMarks();
        displaySports();
        int total = totalMarks() + sportsMarks;
        float average = total / 4.0;
        cout << "Overall Total: " << total << "\nAverage Marks: " << average << endl;
    }
};

int main() {
    Result r;
    r.setStudent("Neha", 202);
    r.setMarks(85, 90, 88);
    r.setSportsMarks(40);
    r.displayResult();
    return 0;
}
