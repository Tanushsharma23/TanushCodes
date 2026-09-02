#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of Rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.input();
    rect.displayArea();
    return 0;
}