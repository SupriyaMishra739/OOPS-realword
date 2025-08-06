#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;
    int speed;

    // constructor
    Vehicle()
    {
        brand = "";
        speed = 0;
    }
    Vehicle(string b, int s)
    {
        brand = b;
        speed = s;
    }

    virtual void displayDetails()
    {
        cout << "these are the details:" << endl;
    }
};

class Car : public Vehicle
{

public:
    // constructor that calls base class constructor
    Car(string b, int s) : Vehicle(b, s) {}
    void displayDetails() override
    {
        cout << "the brand is:" << brand << " the speed is:" << speed << endl;
    }
};

class Bike : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "the brand is:" << brand << "the speed is:" << speed << endl;
    }
};

int main()
{

    Vehicle *v1 = new Car("bmw", 131);
    v1->displayDetails();
}