#include <iostream>
using namespace std;

class Car
{
public:
    string brand, model;
    int year;

    // default constructor
    Car()
    {
    }

    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo()
    {
        cout << "the brand is:" << brand << ", the model is: " << model << " ,the year is:" << year << endl;
    }
};

int main()
{
    Car c1;
    c1.brand = "bmw";
    c1.model = "cz";
    c1.year = 2010;

    c1.displayInfo();
    Car c2("mercedes", "gq", 2025);
    c2.displayInfo();

    Car *c3 = new Car("mercedes", "benz", 2025);
    c3->displayInfo();
}