#include <iostream>
using namespace std;

class FlightTicket
{
public:
    string passengerName;
    int flightNumber;
    static int totalPassenger;

    FlightTicket()
    {
        passengerName = "";
        flightNumber = 0;
        // Don't reset totalPassenger here
    }

    FlightTicket(string n, int num)
    {
        passengerName = n;
        flightNumber = num;
        totalPassenger++;
    }

    static void gettotalPassenger()
    {
        cout << "Total passengers: " << totalPassenger << endl;
    }

    void bookTicket(string name, int flightNum)
    {
        passengerName = name;
        flightNumber = flightNum;
        totalPassenger++;
        cout << "Ticket booked for " << name << " on flight " << flightNum << endl;
        gettotalPassenger();
    }

    void cancelTicket()
    {
        cout << "Ticket canceled for " << passengerName << " on flight " << flightNumber << endl;
        totalPassenger--;
        gettotalPassenger();
    }
};

int FlightTicket::totalPassenger = 0;

int main()
{
    FlightTicket f1;
    f1.bookTicket("Seeky", 101);

    FlightTicket f2;
    f2.bookTicket("Zara", 202);

    f1.cancelTicket(); // Cancel Seeky's ticket

    return 0;
}
