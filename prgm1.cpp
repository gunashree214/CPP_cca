#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area";
    }
};

class Circle : public Shape
{
public:
    float r;

    void area()
    {
        cout << "Area of Circle = " << 3.14 * r * r;
    }
};

class Rectangle : public Shape
{
public:
    float l, b;

    void area()
    {
        cout << "Area of Rectangle = " << l * b;
    }
};

int main()
{
    Shape *s;
    Circle c;
    Rectangle r;
    int choice;

    cout << "1. Circle\n2. Rectangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter radius: ";
        cin >> c.r;
        s = &c;
        s->area();
    }
    else if(choice == 2)
    {
        cout << "Enter length and breadth: ";
        cin >> r.l >> r.b;
        s = &r;
        s->area();
    }

    return 0;
}