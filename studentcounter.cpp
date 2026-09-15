/*SET4 P5*/
#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:

    Student()
    {
        count++;
        cout << "Student Created" << endl;
    }

    static void display()
    {
        cout << "Total Students = " << count << endl;
    }
};
int Student::count=0;
int main()
{
    Student s1;
    Student s2;
    Student s3;

    Student::display();

    return 0;

}


