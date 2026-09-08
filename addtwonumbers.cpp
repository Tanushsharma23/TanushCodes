 /*SET3 P1*/
 #include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    void input() {
        cout << "Enter a number: ";
        cin >> value;
    }

    int getValue() {
        return value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

Number add(Number n1, Number n2) {
    return Number(n1.getValue() + n2.getValue());
}

int main() {
    Number num1, num2;

    num1.input();
    num2.input();

    Number sum = add(num1, num2);

    cout << "Sum: ";
    sum.display();

    return 0;
}

