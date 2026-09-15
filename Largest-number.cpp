/*SET4 P7*/
#include <iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:

    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void largest(Number n);
};

void largest(Number n)
{
    if(n.a > n.b)
        cout << "Largest = " << n.a << endl;
    else
        cout << "Largest = " << n.b << endl;
}

int main()
{
    Number n(25, 40);

    largest(n);

    return 0;
}
