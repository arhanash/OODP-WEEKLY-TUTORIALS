#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    float price;
    bool isBooked;

public:
    // Constructor to initialize ticket details
    MovieTicket(string name, int seat, float cost) {
        movieName = name;
        seatNumber = seat;
        price = cost;
        isBooked = false;  // Ticket is available initially
    }

    // Function to book the ticket
    void bookTicket() {
        if (isBooked) {
            cout << "Seat " << seatNumber << " is already booked!" << endl;
        } else {
            isBooked = true;
            cout << "Seat " << seatNumber << " for '" << movieName << "' has been booked successfully!" << endl;
        }
    }

    // Function to cancel the ticket
    void cancelTicket() {
        if (!isBooked) {
            cout << "Seat " << seatNumber << " is not booked yet!" << endl;
        } else {
            isBooked = false;
            cout << "Booking for seat " << seatNumber << " has been canceled!" << endl;
        }
    }

    // Function to display ticket details
    void displayTicketDetails() {
        cout << "Movie: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Price: $" << price << endl;
        cout << "Status: " << (isBooked ? "Booked" : "Available") << endl;
        cout << "-----------------------------" << endl;
    }

    // Destructor
    ~MovieTicket() {
        cout << "Ticket for seat " << seatNumber << " has been removed from memory." << endl;
    }
};

int main() {
    // Creating multiple tickets
    MovieTicket ticket1("Avengers: Endgame", 12, 10.5);
    MovieTicket ticket2("Interstellar", 25, 12.0);
    MovieTicket ticket3("Inception", 8, 9.99);

    // Display initial ticket details
    cout << "Initial Ticket Status:\n";
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    // Booking tickets
    cout << "\nBooking Tickets:\n";
    ticket1.bookTicket();
    ticket2.bookTicket();
    ticket2.bookTicket(); // Trying to book an already booked ticket

    // Display updated ticket details
    cout << "\nUpdated Ticket Status:\n";
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    // Cancel a ticket
    cout << "\nCanceling a Ticket:\n";
    ticket2.cancelTicket();
    ticket2.cancelTicket(); // Trying to cancel an already canceled ticket

    // Display final ticket details
    cout << "\nFinal Ticket Status:\n";
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    return 0;
}
