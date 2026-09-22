
#include <iostream>
using namespace std;

template <typename T>
class Result {
private:
    T marks[5];

public:
    Result(T m[5]) {
        for (int i = 0; i < 5; ++i) {
            marks[i] = m[i];
        }
    }

    T calculateTotal() const {
        T total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return total;
    }

    double calculateAverage() const {
        return calculateTotal() / 5.0;
    }

    T getHighest() const {
        T highest = marks[0];
        for (int i = 1; i < 5; ++i) {
            if (marks[i] > highest) {
                highest = marks[i];
            }
        }
        return highest;
    }

    T getLowest() const {
        T lowest = marks[0];
        for (int i = 1; i < 5; ++i) {
            if (marks[i] < lowest) {
                lowest = marks[i];
            }
        }
        return lowest;
    }

    void displayResult() const {
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal: " << calculateTotal()
             << "\nAverage: " << calculateAverage()
             << "\nHighest: " << getHighest()
             << "\nLowest: " << getLowest() << endl;
    }
};

int main() {
    cout << "--- Integer Marks Result ---" << endl;
    int intMarks[5] = {85, 90, 78, 92, 88};
    Result<int> res1(intMarks);
    res1.displayResult();

    cout << "\n--- Floating-Point Marks Result ---" << endl;
    double floatMarks[5] = {85.5, 90.25, 78.0, 92.5, 88.75};
    Result<double> res2(floatMarks);
    res2.displayResult();

    return 0;
}