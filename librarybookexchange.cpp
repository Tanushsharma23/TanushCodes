/*SET3 P8*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    int copies;

public:
    Book(int id = 0, string t = "", int c = 0) : bookID(id), title(t), copies(c) {}

    void exchange(Book &other) {
        swap(bookID, other.bookID);
        swap(title, other.title);
        swap(copies, other.copies);
    }

    void display() const {
        cout << "ID: " << bookID << " | Title: " << title << " | Copies: " << copies << endl;
    }

    friend Book getMoreCopies(const Book& b1, const Book& b2);
};

Book getMoreCopies(const Book& b1, const Book& b2) {
    if (b1.copies >= b2.copies) {
        return b1;
    }
    return b2;
}

int main() {
    Book b1(101, "C++ Programming", 10);
    Book b2(102, "Data Structures", 25);

    cout << "Before Exchange:" << endl;
    cout << "Book 1 -> "; b1.display();
    cout << "Book 2 -> "; b2.display();

    b1.exchange(b2);

    cout << "\nAfter Exchange:" << endl;
    cout << "Book 1 -> "; b1.display();
    cout << "Book 2 -> "; b2.display();

    Book more = getMoreCopies(b1, b2);
    cout << "\nBook with more copies: ";
    more.display();

    return 0;
}