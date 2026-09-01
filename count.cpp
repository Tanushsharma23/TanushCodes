#include <iostream>
using namespace std;

int main() {
    int n, a[100], x, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            count++;
    }

    cout << count;

    return 0;
}