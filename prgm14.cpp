#include <iostream>
using namespace std;

class InvalidPrice {
};

class InvalidQuantity {
};

class InsufficientStock {
};

int main() {
    float price;
    int quantity, stock;

    cout << "Enter price, quantity and stock: ";
    cin >> price >> quantity >> stock;

    try {
        if (price <= 0) {
            throw InvalidPrice();
        }

        if (quantity <= 0) {
            throw InvalidQuantity();
        }

        if (quantity > stock) {
            throw InsufficientStock();
        }

        cout << "Order Confirmed" << endl;
        cout << "Total Amount = " << price * quantity << endl;
        cout << "Remaining Stock = " << stock - quantity;
    }

    catch (InvalidPrice e) {
        cout << "Exception: Invalid Product Price";
    }

    catch (InvalidQuantity e) {
        cout << "Exception: Invalid Quantity";
    }

    catch (InsufficientStock e) {
        cout << "Exception: Insufficient Stock";
    }

    return 0;
}