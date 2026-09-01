#include <iostream>
using namespace std;

int main() {
    int n, a[100];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j])
                duplicate = true;
        }

        if (!duplicate)
            cout << a[i] << " ";
    }

    return 0;
}