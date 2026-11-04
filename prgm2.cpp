#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "Employee Salary";
    }
};

class Manager : public Employee
{
public:
    int basic, allowance;

    void calculateSalary()
    {
        cout << "Enter basic salary and allowance: ";
        cin >> basic >> allowance;

        cout << "Total Salary = " << basic + allowance;
    }
};

class Developer : public Employee
{
public:
    int basic, bonus;

    void calculateSalary()
    {
        cout << "Enter basic salary and bonus: ";
        cin >> basic >> bonus;

        cout << "Total Salary = " << basic + bonus;
    }
};

int main()
{
    Employee *e;
    Manager m;
    Developer d;
    int choice;

    cout << "1. Manager\n2. Developer\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        e = &m;
    else
        e = &d;

    e->calculateSalary();

    return 0;
}