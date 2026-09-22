/*SET5 P8*/
#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T elements[5];

public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; ++i) {
            cin >> elements[i];
        }
    }

    void display() const {
        cout << "Elements: ";
        for (int i = 0; i < 5; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    T getLargest() const {
        T maxVal = elements[0];
        for (int i = 1; i < 5; ++i) {
            if (elements[i] > maxVal) {
                maxVal = elements[i];
            }
        }
        return maxVal;
    }

    T getSmallest() const {
        T minVal = elements[0];
        for (int i = 1; i < 5; ++i) {
            if (elements[i] < minVal) {
                minVal = elements[i];
            }
        }
        return minVal;
    }
};

int main() {
    cout << "--- Integer Array ---" << endl;
    Array<int> intArray;
    intArray.input();
    intArray.display();
    cout << "Largest: " << intArray.getLargest() << endl;
    cout << "Smallest: " << intArray.getSmallest() << endl;

    cout << "\n--- Floating-Point Array ---" << endl;
    Array<double> doubleArray;
    doubleArray.input();
    doubleArray.display();
    cout << "Largest: " << doubleArray.getLargest() << endl;
    cout << "Smallest: " << doubleArray.getSmallest() << endl;

    return 0;
}