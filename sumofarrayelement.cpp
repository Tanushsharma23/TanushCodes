#include <iostream>
using namespace std;

class ArraySum {
private:
    int arr[10];

public:
    ArraySum() {
        cout << "Enter 10 integers:\n";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    int findSum() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    ArraySum obj;
    cout << "Sum of array elements: " << obj.findSum() << endl;
    return 0;
}