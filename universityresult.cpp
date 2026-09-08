/*SET3 P10*/
#include <iostream>
#include <algorithm>
using namespace std;

class Result {
private:
    int rollNumber;
    int marks[5];

public:
    Result(int roll = 0, int m[] = nullptr) : rollNumber(roll) {
        for (int i = 0; i < 5; ++i) {
            marks[i] = (m != nullptr) ? m[i] : 0;
        }
    }

    int getTotalMarks() const {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return total;
    }

    bool hasHigherTotalThan(const Result& r) const {
        return getTotalMarks() > r.getTotalMarks();
    }

    void display() const {
        cout << "Roll No: " << rollNumber << " | Marks: [";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << (i < 4 ? ", " : "");
        }
        cout << "] | Total: " << getTotalMarks() << endl;
    }

    friend Result getTopper(const Result& r1, const Result& r2, const Result& r3);
    friend Result applyGraceMarks(const Result& r);
};
Result getTopper(const Result& r1, const Result& r2, const Result& r3) {
    if (r1.getTotalMarks() >= r2.getTotalMarks() && r1.getTotalMarks() >= r3.getTotalMarks()) {
        return r1;
    } else if (r2.getTotalMarks() >= r1.getTotalMarks() && r2.getTotalMarks() >= r3.getTotalMarks()) {
        return r2;
    }
    return r3;
}

Result applyGraceMarks(const Result& r) {
    Result newResult = r;
    int totalGraceApplied = 0;

    for (int i = 0; i < 5; ++i) {
        int maxGraceForSubject = min(5, 100 - newResult.marks[i]);
        int graceForSubject = min(maxGraceForSubject, 20 - totalGraceApplied);

        if (graceForSubject > 0) {
            newResult.marks[i] += graceForSubject;
            totalGraceApplied += graceForSubject;
        }

        if (totalGraceApplied >= 20) {
            break;
        }
    }
    return newResult;
}

int main() {
    int m1[5] = {80, 82, 85, 78, 88};
    int m2[5] = {70, 75, 80, 85, 90};
    int m3[5] = {92, 95, 89, 94, 91};

    Result res1(101, m1);
    Result res2(102, m2);
    Result res3(103, m3);

    cout << "Student Results:" << endl;
    res1.display();
    res2.display();
    res3.display();

    Result topper = getTopper(res1, res2, res3);
    cout << "\nTopper: ";
    topper.display();

    Result graceRes1 = applyGraceMarks(res1);
    cout << "Result 1 after Grace Marks: ";
    graceRes1.display();

    return 0;
}