/*SET5 P6*/
#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
   
    int i1 = 10, i2 = 20;
    cout << "Max int (10, 20): " << getMax(i1, i2) << endl;
    swapValues(i1, i2);
    cout << "Swapped ints: i1 = " << i1 << ", i2 = " << i2 << endl << endl;

    
    float f1 = 5.5f, f2 = 2.3f;
    cout << "Max float (5.5, 2.3): " << getMax(f1, f2) << endl;
    swapValues(f1, f2);
    cout << "Swapped floats: f1 = " << f1 << ", f2 = " << f2 << endl << endl;

   
    double d1 = 99.99, d2 = 100.5;
    cout << "Max double (99.99, 100.5): " << getMax(d1, d2) << endl;
    swapValues(d1, d2);
    cout << "Swapped doubles: d1 = " << d1 << ", d2 = " << d2 << endl << endl;

   
    char c1 = 'A', c2 = 'Z';
    cout << "Max char ('A', 'Z'): " << getMax(c1, c2) << endl;
    swapValues(c1, c2);
    cout << "Swapped chars: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}