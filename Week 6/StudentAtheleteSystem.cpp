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
        cout << "Name: " << name << "\nRoll Number: " << rollNo << endl;
    }
};

class SportsPlayer {
protected:
    string sportName;
    int ranking;
public:
    void setSport(string s, int r) {
        sportName = s;
        ranking = r;
    }
    void displaySport() {
        cout << "Sport: " << sportName << "\nRanking: " << ranking << endl;
    }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void displayDetails() {
        displayStudent();
        displaySport();
    }
};

int main() {
    SportStudent s;
    s.setStudent("Amit", 101);
    s.setSport("Football", 2);
    s.displayDetails();
    return 0;
}
