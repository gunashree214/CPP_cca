#include <iostream>
using namespace std;

class Payment {
public:
    virtual void makePayment(int amount) {
        cout << "Payment Mode: General" << endl;
    }
};

class CreditCard : public Payment {
public:
    void makePayment(int amount) {
        cout << "Payment Mode: Credit Card" << endl;
        cout << "Amount Paid = " << amount << endl;
        cout << "Payment Successful";
    }
};

class UPI : public Payment {
public:
    void makePayment(int amount) {
        cout << "Payment Mode: UPI" << endl;
        cout << "Amount Paid = " << amount << endl;
        cout << "Payment Successful";
    }
};

class Cash : public Payment {
public:
    void makePayment(int amount) {
        cout << "Payment Mode: Cash" << endl;
        cout << "Amount Paid = " << amount << endl;
        cout << "Payment Successful";
    }
};

int main() {
    Payment *p;
    UPI u;

    int amount = 2500;

    p = &u;
    p->makePayment(amount);

    return 0;
}