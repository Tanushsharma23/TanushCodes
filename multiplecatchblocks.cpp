/*SET6 P7*/
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cin >> num1 >> op >> num2;

    try {
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            throw op; 
        }
        if (op == '/' && num2 == 0) {
            throw 0;
        }

        switch (op) {
            case '+': cout << "Result: " << num1 + num2 << endl; break;
            case '-': cout << "Result: " << num1 - num2 << endl; break;
            case '*': cout << "Result: " << num1 * num2 << endl; break;
            case '/': cout << "Result: " << num1 / num2 << endl; break;
        }
    } 
    catch (int e) {
        cout << "Division by Zero Error." << endl;
    } 
    catch (char e) {
        cout << "Error: Invalid operator '" << e << "'." << endl;
    }

    return 0;
}