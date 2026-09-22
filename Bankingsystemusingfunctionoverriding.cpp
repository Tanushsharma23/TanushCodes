/*SET5 P5*/
#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal) : accountNumber(accNo), balance(bal) {}

    virtual void display() const {
        cout << "Acc No: " << accountNumber << " | Balance: $" << balance;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate) 
        : Account(accNo, bal), interestRate(rate) {}

    void display() const override {
        Account::display();
        cout << " | Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNo, double bal, double limit) 
        : Account(accNo, bal), overdraftLimit(limit) {}

    void display() const override {
        Account::display();
        cout << " | Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount sa(1001, 5000.0, 4.5);
    CurrentAccount ca(2001, 12000.0, 2000.0);

    cout << "--- Account Details ---" << endl;
    sa.display();
    ca.display();

    return 0;
}