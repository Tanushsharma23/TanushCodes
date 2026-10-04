/*SET6 P1*/
#include <iostream>
using namespace std;

int main() {
    double numerator, denominator;
    cin >> numerator >> denominator;

    try {
        if (denominator == 0) {
            throw "Error: Division by zero is not allowed.";
        }
        cout << "Result: " << numerator / denominator << endl;
    } 
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}