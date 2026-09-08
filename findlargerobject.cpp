#include <iostream>
using namespace std;

class Student {
    int rollNo;
    int marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    int getMarks() {
        return marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

Student findTop(Student s1, Student s2) {
    if (s1.getMarks() > s2.getMarks())
        return s1;
    else
        return s2;
}

int main() {
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    Student topper = findTop(s1, s2);

    cout << "\nStudent with higher marks:" << endl;
    topper.display();

    return 0;
}