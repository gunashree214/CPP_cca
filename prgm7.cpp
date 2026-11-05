#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest(double balance) {
        return 0;
    }
};

class SavingsAccount : public Account {
public:
    double calculateInterest(double balance) {
        return balance * 6 / 100;
    }
};

class CurrentAccount : public Account {
public:
    double calculateInterest(double balance) {
        return balance * 2 / 100;
    }
};

class FixedDepositAccount : public Account {
public:
    double calculateInterest(double balance) {
        return balance * 8 / 100;
    }
};

int main() {
    Account *a;
    SavingsAccount s;

    double balance = 50000;
    double interest;

    a = &s;
    interest = a->calculateInterest(balance);

    cout << "Interest = " << interest << endl;
    cout << "Final Balance = " << balance + interest;

    return 0;
}