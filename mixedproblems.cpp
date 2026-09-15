/*SET4 P10*/
#include <iostream>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    float price;

    static int totalBooks;

public:

    Book(int id, string name, float p)
    {
        bookID = id;
        bookName = name;
        price = p;

        totalBooks++;
    }

    inline float discountPrice()
    {
        return price - (price * 10 / 100);
    }

    bool operator >(Book b)
    {
        if(price > b.price)
            return true;
        else
            return false;
    }

    friend void displayCostlier(Book b);

    static void displayTotalBooks()
    {
        cout << "Total Books = " << totalBooks << endl;
    }
};

int Book::totalBooks = 0;

void displayCostlier(Book b)
{
    cout << "Costlier Book:" << endl;
    cout << "ID: " << b.bookID << endl;
    cout << "Name: " << b.bookName << endl;
    cout << "Price: " << b.price << endl;
}

int main()
{
    Book b1(101, "C++ Basics", 500);
    Book b2(102, "C++ Programming", 700);

    cout << "Book 1 Price = 500" << endl;
    cout << "Book 2 Price = 700" << endl;

    if(b1 > b2)
    {
        displayCostlier(b1);
    }
    else
    {
        displayCostlier(b2);
    }

    Book::displayTotalBooks();

    cout << "Discounted Price = "
         << b2.discountPrice() << endl;

    return 0;
}
