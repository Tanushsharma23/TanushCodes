#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // Parameterized constructor
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b1("C++ Programming", "Bjarne Stroustrup");
    b1.display();
    return 0;
}