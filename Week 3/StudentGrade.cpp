#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    double marks[5];

public:
    // Constructor to initialize student details
    Student(int id, string studentName, double studentMarks[5]) {
        studentID = id;
        name = studentName;
        for (int i = 0; i < 5; i++) {
            marks[i] = studentMarks[i];
        }
    }

    // Function to calculate average marks
    double calculateAverage() {
        double sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Student ID: " << studentID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << "\n";
    }
};

int main() {
    // Creating multiple student objects
    double marks1[5] = {85, 90, 78, 88, 92};
    double marks2[5] = {76, 81, 69, 74, 80};
    
    Student student1(101, "Alice", marks1);
    Student student2(102, "Bob", marks2);
    
    // Displaying student details
    student1.displayDetails();
    cout << "\n";
    student2.displayDetails();
    
    return 0;
}
