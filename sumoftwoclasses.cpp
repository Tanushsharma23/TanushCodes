/*SET4 P8*/
#include <iostream>
using namespace std;

class B;

class A
{
private:
    int a;

public:

    A(int x)
    {
        a = x;
    }

    friend int sum(A, B);
};

class B
{
private:
    int b;

public:

    B(int y)
    {
        b = y;
    }

    friend int sum(A, B);
};

int sum(A x, B y)
{
    return x.a + y.b;
}

int main()
{
    A obj1(10);
    B obj2(20);

    cout << "A = 10" << endl;
    cout << "B = 20" << endl;
    cout << "Sum = " << sum(obj1, obj2) << endl;

    return 0;
}
