#include <iostream>
#include <vector>
using namespace std;

class Ticket {
    int ticketID;
    string passengerName;
    bool isBooked;

public:
    Ticket(int id, string name) {
        ticketID = id;
        passengerName = name;
        isBooked = true;
    }

    void cancel() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket ID " << ticketID << " for " << passengerName << " is cancelled." << endl;
        } else {
            cout << "Ticket already cancelled." << endl;
        }
    }

    void display() {
        cout << "Ticket ID: " << ticketID 
             << ", Passenger: " << passengerName 
             << ", Status: " << (isBooked ? "Booked" : "Cancelled") << endl;
    }
};

int main() {
    // Booking tickets
    Ticket t1(101, "Alice");
    Ticket t2(102, "Bob");
    Ticket t3(103, "Charlie");

    // Display booked tickets
    t1.display();
    t2.display();
    t3.display();

    cout << "--- Cancelling Ticket 102 ---" << endl;
    t2.cancel();

    // Display after cancellation
    cout << "\nUpdated Ticket Info:\n";
    t1.display();
    t2.display();
    t3.display();

    return 0;
}
