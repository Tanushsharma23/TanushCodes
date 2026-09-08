#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum = 0, double bal = 0.0) {
        accountNumber = accNum;
        balance = bal;
    }

    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Member function passing receiver by reference
    void transfer(BankAccount &receiver, double amount) {
        if (amount > balance) {
            cout << "Transfer failed! Insufficient balance in Acc " << accountNumber << "." << endl;
        } else {
            balance -= amount;
            receiver.balance += amount;
            cout << "Successfully transferred $" << amount << " to Acc " << receiver.accountNumber << "." << endl;
        }
    }

    void display() const {
        cout << "Acc No: " << accountNumber << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1, acc2;
    cout << "--- Account 1 ---" << endl;
    acc1.input();
    cout << "--- Account 2 ---" << endl;
    acc2.input();

    double amount;
    cout << "\nEnter amount to transfer from Acc 1 to Acc 2: ";
    cin >> amount;

    acc1.transfer(acc2, amount);

    cout << "\nUpdated Balances:" << endl;
    acc1.display();
    acc2.display();

    return 0;
}