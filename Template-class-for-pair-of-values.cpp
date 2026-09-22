/*SET5 P7*/
#include <iostream>
using namespace std;

template <typename T>
class Pair {
private:
    T val1;
    T val2;

public:
    Pair(T v1, T v2) : val1(v1), val2(v2) {}

    T getMax() const {
        return (val1 > val2) ? val1 : val2;
    }

    T getMin() const {
        return (val1 < val2) ? val1 : val2;
    }

    void display() const {
        cout << "Values: (" << val1 << ", " << val2 << ")" << endl;
        cout << "  Max: " << getMax() << endl;
        cout << "  Min: " << getMin() << endl;
    }
};

int main() {
    cout << "--- Integer Pair ---" << endl;
    Pair<int> intPair(15, 42);
    intPair.display();

    cout << "\n--- Floating-Point Pair ---" << endl;
    Pair<double> doublePair(88.5, 23.4);
    doublePair.display();

    return 0;
}
