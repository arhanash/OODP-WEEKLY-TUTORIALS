#include <iostream>

using namespace std;

const int MAX_STUDENTS = 100;
int marks[MAX_STUDENTS], num_students = 0;

void enterMarks() {
    cout << "Enter number of students: ";
    cin >> num_students;
    if (num_students > MAX_STUDENTS || num_students <= 0) {
        cout << "Invalid number of students!\n";
        num_students = 0;
        return;
    }
    cout << "Enter marks for " << num_students << " students:\n";
    for (int i = 0; i < num_students; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void calculateAverage() {
    if (num_students == 0) {
        cout << "No marks entered yet!\n";
        return;
    }
    int sum = 0;
    for (int i = 0; i < num_students; i++) {
        sum += marks[i];
    }
    cout << "Average marks: " << (sum / (float)num_students) << "\n";
}

void findHighestLowest() {
    if (num_students == 0) {
        cout << "No marks entered yet!\n";
        return;
    }
    int highest = marks[0], lowest = marks[0];
    for (int i = 1; i < num_students; i++) {
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];
    }
    cout << "Highest marks: " << highest << "\n";
    cout << "Lowest marks: " << lowest << "\n";
}

int main() {
    char option;
    do {
        cout << "\nMenu:\n";
        cout << "a. Enter marks\nb. Calculate average\nc. Find highest & lowest marks\nd. Exit\n";
        cout << "Enter choice: ";
        cin >> option;

        switch (option) {
            case 'a': enterMarks(); break;
            case 'b': calculateAverage(); break;
            case 'c': findHighestLowest(); break;
            case 'd': cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (option != 'd');
    return 0;
}