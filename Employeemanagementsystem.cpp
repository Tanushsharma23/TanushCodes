/*SET5 P2*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empID;
    string name;

public:
    Employee(int id = 0, string n = "") : empID(id), name(n) {}
};

class Manager : public Employee {
private:
    string department;
    double salary;

public:
    Manager(int id = 0, string n = "", string dept = "", double sal = 0.0)
        : Employee(id, n), department(dept), salary(sal) {}

    void display() const {
        cout << "ID: " << empID << " | Name: " << name 
             << " | Dept: " << department << " | Salary: $" << salary << endl;
    }
};

int main() {
    Manager managers[5] = {
        Manager(1, "Tanush", "HR", 60000),
        Manager(2, "Rahul", "IT", 75000),
        Manager(3, "Ajay", "Finance", 70000),
        Manager(4, "Rashid", "Marketing", 65000),
        Manager(5, "Ayush", "Operations", 61000)
    };

    cout << "--- Manager Details ---" << endl;
    for (int i = 0; i < 5; ++i) {
        managers[i].display();
    }

    return 0;
}