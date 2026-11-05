#include <iostream>
using namespace std;

class InvalidAge {
};

class InvalidQuantity {
};

class InvalidAmount {
};

int main() {
    int age, quantity = 1;
    float consultation, lab, medicine, total;

    cout << "Enter patient age: ";
    cin >> age;

    cout << "Enter consultation charge: ";
    cin >> consultation;

    cout << "Enter lab charges: ";
    cin >> lab;

    cout << "Enter medicine charges: ";
    cin >> medicine;

    try {
        if (age <= 0) {
            throw InvalidAge();
        }

        if (quantity <= 0) {
            throw InvalidQuantity();
        }

        if (consultation < 0 || lab < 0 || medicine < 0) {
            throw InvalidAmount();
        }

        total = consultation + lab + medicine;

        cout << "Total Hospital Bill = " << total << endl;
        cout << "Bill Generated Successfully";
    }

    catch (InvalidAge e) {
        cout << "Exception: Invalid Patient Age";
    }

    catch (InvalidQuantity e) {
        cout << "Exception: Invalid Quantity";
    }

    catch (InvalidAmount e) {
        cout << "Exception: Negative Billing Amount";
    }

    return 0;
}