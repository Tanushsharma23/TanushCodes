/*SET5 P4*/
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNumber;
    string company;

public:
    Vehicle(string reg, string comp) : regNumber(reg), company(comp) {}
};

class Car : public Vehicle {
private:
    string fuelType;

public:
    Car(string reg, string comp, string fuel) 
        : Vehicle(reg, comp), fuelType(fuel) {}

    void display() const {
        cout << "Car Details -> Reg: " << regNumber << " | Company: " << company 
             << " | Fuel Type: " << fuelType << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity; // in cc

public:
    Bike(string reg, string comp, int cc) 
        : Vehicle(reg, comp), engineCapacity(cc) {}

    void display() const {
        cout << "Bike Details -> Reg: " << regNumber << " | Company: " << company 
             << " | Engine: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car car1("JK02-6756", "Toyota", "Hybrid");
    Car car2("JK11-5678", "Hyundai", "Electric");
    Bike bike1("JK14-9012", "Yamaha", 150);

    car1.display();
    car2.display();
    bike1.display();

    return 0;
}