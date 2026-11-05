#include <iostream>
using namespace std;

class Payment {
public:
    virtual double processPayment(double amount) {
        return 0;
    }
};

class UPIPayment : public Payment {
public:
    double processPayment(double amount) {
        return amount * 0 / 100;
    }
};

class CardPayment : public Payment {
public:
    double processPayment(double amount) {
        return amount * 2 / 100;
    }
};

class NetBankingPayment : public Payment {
public:
    double processPayment(double amount) {
        return amount * 1 / 100;
    }
};

int main() {
    Payment *p;
    CardPayment c;

    double amount = 10000;
    double charge;

    p = &c;
    charge = p->processPayment(amount);

    cout << "Transaction Charge = " << charge << endl;
    cout << "Total Amount = " << amount + charge << endl;
    cout << "Payment Status = Successful";

    return 0;
}