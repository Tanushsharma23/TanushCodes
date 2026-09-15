/*SET4 P1*/
#include<iostream>
using namespace std;

class Area
{
    public:
    void calculate(int side)
    {
        cout<<"Area of square="<<side*side<<endl;
    
    }
    void calculate(int length, int breadth)
    {
        cout<<"Area of rectangle="<<length*breadth<<endl;
    }
    void calculate(float radius)
    {
        cout<<"Area of circle="<<3.14*radius*radius<<endl;
    }

};
int main()
{
    Area a;
    a.calculate(5);
    a.calculate(4,6);
    a.calculate(3,5);
    return 0;
}