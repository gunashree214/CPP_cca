#include <iostream>
using namespace std;

template <class T>
class Calculator
{
public:
    T a, b;

    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide()
    {
        if(b != 0)
            cout << "Division = " << (double)a / b << endl;
        else
            cout << "Division not possible";
    }
};

int main()
{
    double x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calculator<double> c(x, y);

    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}