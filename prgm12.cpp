#include <iostream>
using namespace std;

class InvalidPIN {
};

int main() {
    int correctPIN = 1234;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter PIN: ";
        cin >> pin;

        try {
            if (pin != correctPIN) {
                throw InvalidPIN();
            }

            cout << "PIN Verified Successfully";
            return 0;
        }
        catch (InvalidPIN e) {
            attempts--;

            cout << "Exception: Incorrect PIN." << endl;
            cout << "Attempts Remaining: " << attempts << endl;
        }
    }

    cout << "ATM Card Blocked";

    return 0;
}