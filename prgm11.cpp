#include <iostream>
using namespace std;

class InsufficientBalanceException {
};

class BankAccount {
    int balance;

public:
    BankAccount(int b) {
        balance = b;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            throw InsufficientBalanceException();
        }

        balance = balance - amount;

        cout << "Withdrawal Successful" << endl;
        cout << "Remaining Balance = " << balance;
    }
};

int main() {
    int balance = 10000;
    int amount = 12000;

    BankAccount b(balance);

    try {
        b.withdraw(amount);
    }
    catch (InsufficientBalanceException e) {
        cout << "Exception: Insufficient balance.";
    }

    return 0;
}