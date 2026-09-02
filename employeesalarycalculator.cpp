#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    double basicSalary;

public:
    Employee(string name, double salary) {
        employeeName = name;
        basicSalary = salary;
    }

    double calculateHRA() {
        return 0.20 * basicSalary; // HRA = 20%
    }

    double calculateDA() {
        return 0.10 * basicSalary; // DA = 10%
    }

    void displayGrossSalary() {
        double grossSalary = basicSalary + calculateHRA() + calculateDA();
        cout << "Employee: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << calculateHRA() << endl;
        cout << "DA: " << calculateDA() << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp("Sara", 50000);
    emp.displayGrossSalary();
    return 0;
}