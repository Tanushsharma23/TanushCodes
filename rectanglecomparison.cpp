/*SET3 P7*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    double getArea() const {
        return length * width;
    }

    bool hasEqualArea(const Rectangle& r) const {
        return getArea() == r.getArea();
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << getArea() << endl;
    }

    friend Rectangle mergeRectangles(const Rectangle& r1, const Rectangle& r2);
};

Rectangle mergeRectangles(const Rectangle& r1, const Rectangle& r2) {
    return Rectangle(r1.length + r2.length, r1.width + r2.width);
}

int main() {
    Rectangle r1(4, 5);
    Rectangle r2(2, 10);

    cout << "Rectangle 1: "; r1.display();
    cout << "Rectangle 2: "; r2.display();

    if (r1.hasEqualArea(r2)) {
        cout << "\nBoth rectangles have equal area." << endl;
    } else {
        cout << "\nRectangles have different areas." << endl;
    }

    Rectangle rMerged = mergeRectangles(r1, r2);
    cout << "Merged Rectangle: "; rMerged.display();

    return 0;
}