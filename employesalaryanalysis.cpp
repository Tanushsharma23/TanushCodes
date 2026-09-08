/*SET3 P6*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string n = "", double s = 0.0) : name(n), salary(s) {}

    void display() const {
        cout << "Name: " << name << " | Salary: $" << salary << endl;
    }

    friend Employee getHighestSalary(Employee empArr[], int size);
    friend Employee applyIncrement(Employee emp);
};

Employee getHighestSalary(Employee empArr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (empArr[i].salary > empArr[maxIndex].salary) {
            maxIndex = i;
        }
    }
    return empArr[maxIndex];
}

Employee applyIncrement(Employee emp) {
    return Employee(emp.name, emp.salary * 1.10);
}

int main() {
    Employee employees[3] = {
        Employee("RAHUL", 50000),
        Employee("TANUSH", 65000),
        Employee("RASHID", 58000)
    };

    Employee topEmp = getHighestSalary(employees, 3);
    cout << "Employee with Highest Salary: ";
    topEmp.display();

    Employee revisedAlice = applyIncrement(employees[0]);
    cout << "RAHUL after 10% Increment: ";
    revisedAlice.display();

    return 0;
}