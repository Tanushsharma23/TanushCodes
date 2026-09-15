/*SET4 P6*/
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string customerName;

    static int totalAccounts;

public:

    BankAccount(int number, string name)
    {
        accountNumber = number;
        customerName = name;

        totalAccounts++;
    }

    static void displayTotal()
    {
        cout << "Total Bank Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount b1(101, "Rahul");
    BankAccount b2(102, "Tanush");
    BankAccount b3(103, "Rohit");

    BankAccount::displayTotal();

    return 0;
}
