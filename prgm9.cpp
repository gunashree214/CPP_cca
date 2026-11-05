#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        }

        cout << "Result = " << a / b;
    }
    catch (int x) {
        cout << "Exception: Division by zero is not possible";
    }

    return 0;
}