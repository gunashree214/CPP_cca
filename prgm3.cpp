#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void displayDetails()
    {
        cout << "Vehicle Details";
    }
};

class Car : public Vehicle
{
public:
    string brand, model;

    void displayDetails()
    {
        cout << "Vehicle: Car\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model;
    }
};

class Bike : public Vehicle
{
public:
    string brand, model;

    void displayDetails()
    {
        cout << "Vehicle: Bike\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model;
    }
};

class Bus : public Vehicle
{
public:
    string brand, model;

    void displayDetails()
    {
        cout << "Vehicle: Bus\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model;
    }
};

int main()
{
    Vehicle *v;
    Car c;
    Bike b;
    Bus bus;
    int choice;

    cout << "1. Car\n2. Bike\n3. Bus\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        v = &c;
    else if(choice == 2)
        v = &b;
    else
        v = &bus;

    string brand, model;

    cout << "Enter brand: ";
    cin >> brand;

    cout << "Enter model: ";
    cin >> model;

    if(choice == 1)
    {
        c.brand = brand;
        c.model = model;
    }
    else if(choice == 2)
    {
        b.brand = brand;
        b.model = model;
    }
    else
    {
        bus.brand = brand;
        bus.model = model;
    }

    v->displayDetails();

    return 0;
}