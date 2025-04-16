#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;
    string designation;

public:
    // Parameterized constructor
    Employee(int id, string n, double s, string d) {
        empID = id;
        name = n;
        salary = s;
        designation = d;
    }

    // Copy constructor
    Employee(const Employee &other) {
        empID = other.empID;
        name = other.name;
        salary = other.salary;
        designation = other.designation;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Designation: " << designation << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Create original employees
    Employee emp1(101, "John Doe", 75000.0, "Software Engineer");
    Employee emp2(102, "Jane Smith", 85000.0, "Senior Developer");
    Employee emp3(103, "Mike Johnson", 65000.0, "QA Analyst");

    // Create a copy of employee 2 using copy constructor
    Employee emp4(emp2); // This is the copied employee

    // Display all employee details
    cout << "Original Employees:" << endl;
    emp1.displayDetails();
    emp2.displayDetails();
    emp3.displayDetails();

    cout << "Copied Employee (copy of Jane Smith):" << endl;
    emp4.displayDetails();

    // Modify the copied employee to demonstrate it's a separate object
    emp4.displayDetails();

    return 0;
}