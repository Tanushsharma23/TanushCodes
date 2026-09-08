#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    void input() {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter Inches: ";
        cin >> inches;
    }

    // Member function accepting another Distance object and normalizing result
    Distance add(const Distance &d) const {
        Distance result;
        result.inches = inches + d.inches;
        result.feet = feet + d.feet + (result.inches / 12);
        result.inches %= 12;
        return result;
    }

    void display() const {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2;
    cout << "Enter First Distance:" << endl;
    d1.input();
    cout << "Enter Second Distance:" << endl;
    d2.input();

    Distance total = d1.add(d2);
    cout << "\nTotal Distance: ";
    total.display();

    return 0;
}