/*SET5 P1*/
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
    int age;

public:
    Student(string n, int r, int a) : name(n), rollNumber(r), age(a) {}
};

class EngineeringStudent : public Student {
private:
    string branch;
    int semester;

public:
    EngineeringStudent(string n, int r, int a, string b, int sem)
        : Student(n, r, a), branch(b), semester(sem) {}

    void display() const {
        cout << "--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    EngineeringStudent student1("Tanush Sharma", 23, 19, "Computer Science", 3);
    student1.display();
    return 0;
}