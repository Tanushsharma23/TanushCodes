/*SET6 P8*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("students.txt", ios::app);

    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int rollNo;
    string name;
    float marks;

    cout << "Enter Roll Number, Name, and Marks:\n";
    if (cin >> rollNo >> name >> marks) {
        outFile << rollNo << " " << name << " " << marks << endl;
        cout << "Details saved successfully into students.txt" << endl;
    }

    outFile.close();
    return 0;
}