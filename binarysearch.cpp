#include <iostream>
using namespace std;

int main() {
    int n, a[100], x;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (a[mid] == x) {
            cout << "Found";
            return 0;
        }
        else if (a[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }

    cout << "Not Found";

    return 0;
}