#include <iostream>
using namespace std;

class Complex {
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    void input() {
        cout << "Enter Real part: ";
        cin >> real;
        cout << "Enter Imaginary part: ";
        cin >> imag;
    }

    Complex add(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    friend Complex subtract(const Complex &c1, const Complex &c2);

    Complex multiply(const Complex &c) const {
        return Complex((real * c.real - imag * c.imag), (real * c.imag + imag * c.real));
    }

    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << (imag >= 0 ? imag : -imag) << "i" << endl;
    }
};

Complex subtract(const Complex &c1, const Complex &c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    Complex c1, c2;
    cout << "--- First Complex Number ---" << endl;
    c1.input();
    cout << "--- Second Complex Number ---" << endl;
    c2.input();

    Complex sum = c1.add(c2);
    Complex diff = subtract(c1, c2);
    Complex prod = c1.multiply(c2);

    cout << "\nAddition: "; sum.display();
    cout << "Subtraction: "; diff.display();
    cout << "Multiplication: "; prod.display();

    return 0;
}