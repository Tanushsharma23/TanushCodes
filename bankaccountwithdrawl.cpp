/*SET6 P3*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    void withdraw(double amount) {
        if (amount > balance) {
            throw "Error: Insufficient Balance.";
        }
        balance -= amount;
        cout << "Withdrawal successful. Remaining Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);
    double withdrawAmount;

    cout << "Balance: 5000\nWithdraw: ";
    cin >> withdrawAmount;

    try {
        account.withdraw(withdrawAmount);
    } 
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
