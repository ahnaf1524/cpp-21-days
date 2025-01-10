#include <iostream>
#include <string>
using namespace std;
/*
   REAL-LIFE EXAMPLE: Train Ticket Booking in Bangladesh
   - Imagine booking a train ticket in Bangladesh, such as for the "Sonar Bangla Express".
   - Some passengers book tickets without specifying details (default ticket), while others
     book tickets with their preferred seat type, destination, and fare.
   - Default constructors are used for default tickets, while parameterized constructors
     are used for specific ticket details.
*/
class TrainTicket
{
private:
    string passengerName; // Name of the passenger
    string destination;   // Destination of the journey
    string seatType;      // Seat type (General, AC, Sleeper)
    double fare;          // Ticket price
public:
    // Default Constructor
    // Used when no specific ticket details are provided
    TrainTicket()
    {
        passengerName = "Unnamed Passenger";
        destination = "Dhaka"; // Default Destination
        seatType = "General";  // Default seat type
        fare = 150.0;          // Default fare in BDT
        cout << "Default ticket created for " << passengerName << ".\n";
    }
    // Parameterized Constructor
    // Used when specific ticket details are provided
    TrainTicket(string name, string dest, string seat, double ticketFare)
    {
        passengerName = name;
        destination = dest;
        seatType = seat;
        fare = ticketFare;
        cout << "Ticket Created for " << passengerName << " to " << destination << " with " << seatType << " seat. Fare : " << fare << "BDT.\n";
    }
    // Member function or Method to display ticket details
    void displayTicket(void) const
    {
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Destination : " << destination << endl;
        cout << "Seat Type : " << seatType << endl;
        cout << "Fare : " << fare << endl;
    }
};
int main()
{

    // TOPIC : PARAMETERIZED AND DEFAULT CONSTRUCTORS IN C++
    // ---------------------------------------------------------
    // Using Default Constructor
    TrainTicket ticket1;
    ticket1.displayTicket();
    cout << "--------------------------------------\n";
    // Using Parameterized Constructor
    TrainTicket ticket2("Rahim", "Chittagong", "AC", 500.0); // Specific details provided
    ticket2.displayTicket();
    cout << "--------------------------------------\n";
    TrainTicket ticket3("Karim", "Sylhet", "Sleeper", 800.0);
    ticket3.displayTicket();
    return 0;
}

/*
    NOTE ON CONSTRUCTORS:
    1. **Default Constructor**:
        - A constructor that does not take any arguments.
        - Initializes objects attributes with default values.
        - Useful for creating objects with predefined default settings.
    2. **Parameterized Constructor**:
        - A constructor that takes arguments to initialize object attributes with specific values.
        - Useful for creating objects with customized details
    3. Characteristics of Constructors:
        - Same name as the class.
        - Automatically invoked when an object is created.
        - Cannot return values or have return type.
        - Can be overloaded (multiple constructors with different parameters)
    REAL-LIFE SIGNIFICANCE:
        - The **default constructor** simulates default ticket booking for a general-purpose journey.
        - The **parameterized constructor** simulates a specific booking where the passenger provides
     all required details like destination, seat type, and fare.


*/