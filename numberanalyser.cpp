#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void input() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    bool isEven() {
        return (num % 2 == 0);
    }

    void displayResult() {
        if (isEven()) {
            cout << num << " is Even." << endl;
        } else {
            cout << num << " is Odd." << endl;
        }
    }
};

int main() {
    Number n;
    n.input();
    n.displayResult();
    return 0;
}