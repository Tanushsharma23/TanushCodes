/*SET5 P10*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n = "", int a = 0, string sub = "") 
        : Person(n, a), subject(sub) {}

    void display() const {
        cout << "Teacher -> Name: " << name << " | Age: " << age 
             << " | Subject: " << subject << endl;
    }
};

class ResearchScholar : public Person {
private:
    string researchTopic;

public:
    ResearchScholar(string n = "", int a = 0, string topic = "") 
        : Person(n, a), researchTopic(topic) {}

    void display() const {
        cout << "Research Scholar -> Name: " << name << " | Age: " << age 
             << " | Topic: " << researchTopic << endl;
    }
};

template <typename T>
class RecordManager {
private:
    vector<T> records;

public:
    void addRecord(const T& record) {
        records.push_back(record);
    }

    void displayAll() const {
        for (const auto& record : records) {
            record.display();
        }
    }
};

int main() {
    cout << "--- Teacher Records ---" << endl;
    RecordManager<Teacher> teacherManager;
    teacherManager.addRecord(Teacher("Er.Ritik", 45, "Object Oriented Programming"));
    teacherManager.addRecord(Teacher("Prof. Nimit", 50, "Data Structures"));
    teacherManager.displayAll();

    cout << "\n--- Research Scholar Records ---" << endl;
    RecordManager<ResearchScholar> scholarManager;
    scholarManager.addRecord(ResearchScholar("Tanush", 27, "Artificial Intelligence"));
    scholarManager.addRecord(ResearchScholar("Navaan", 28, "Quantum Computing"));
    scholarManager.displayAll();

    return 0;
}