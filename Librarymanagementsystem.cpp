/*SET5 P3*/
#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;

public:
    Book(string t = "", string a = "") : title(t), author(a) {}
};

class EBook : public Book {
private:
    double fileSize; 
    string fileFormat;

public:
    EBook(string t = "", string a = "", double size = 0.0, string format = "")
        : Book(t, a), fileSize(size), fileFormat(format) {}

    void display() const {
        cout << "Title: " << title << " | Author: " << author 
             << " | Size: " << fileSize << " MB | Format: " << fileFormat << endl;
    }
};

int main() {
    EBook ebooks[3] = {
        EBook("C++ Codes", "Paryansh Sumbaria", 5.4, "PDF"),
        EBook("My Story", "Tanush", 3.2, "PDF"),
        EBook("Life is Journey", "Rashid", 8.1, "PDF")
    };

    cout << "--- E-Book Library ---" << endl;
    for (int i = 0; i < 3; ++i) {
        ebooks[i].display();
    }

    return 0;
}