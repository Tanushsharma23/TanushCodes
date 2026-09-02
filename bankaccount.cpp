#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        }
    }

    void displayBalance() {
        cout << "Account No: " << accountNumber << " | Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(12345, 1000.0);
    acc.displayBalance();
    acc.deposit(500.0);
    acc.withdraw(200.0);
    acc.withdraw(1500.0); // Fails due to insufficient balance
    acc.displayBalance();
    return 0;
}