#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks[5];

public:
    Student() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    float calculateTotal() {
        float total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    float calculatePercentage() {
        return (calculateTotal() / 500.0) * 100;
    }

    char determineGrade() {
        float pct = calculatePercentage();
        if (pct >= 90) return 'A';
        if (pct >= 75) return 'B';
        if (pct >= 60) return 'C';
        if (pct >= 40) return 'D';
        return 'F';
    }

    void displayResult() {
        cout << "\n----- Student Result -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << calculateTotal() << " / 500" << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
        cout << "Grade: " << determineGrade() << endl;
    }
};

int main() {
    Student s;
    s.displayResult();
    return 0;
}