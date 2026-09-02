#include <iostream>
#include <string>
using namespace std;

class Text {
private:
    string str;

public:
    Text(string s) {
        str = s;
    }

    int calculateLength() {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        return length;
    }

    void displayLength() {
        cout << "Length of string: " << calculateLength() << endl;
    }
};

int main() {
    Text t("Hello World");
    t.displayLength();
    return 0;
}