/*SET3 P9*/
#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string n = "", double p = 0.0, int q = 0) : name(n), price(p), quantity(q) {}

    double getTotalValue() const {
        return price * quantity;
    }

    Product combineInventory(const Product& p) const {
        return Product(name + " & " + p.name, price, quantity + p.quantity);
    }

    void display() const {
        cout << "Product: " << name << " | Qty: " << quantity 
             << " | Price: $" << price << " | Total Value: $" << getTotalValue() << endl;
    }

    friend Product getHigherValueProduct(const Product& p1, const Product& p2);
};

Product getHigherValueProduct(const Product& p1, const Product& p2) {
    if (p1.getTotalValue() >= p2.getTotalValue()) {
        return p1;
    }
    return p2;
}

int main() {
    Product p1("Laptop", 1000.0, 2);
    Product p2("Mouse", 25.0, 10);

    p1.display();
    p2.display();

    Product valuable = getHigherValueProduct(p1, p2);
    cout << "\nProduct with Higher Total Value: ";
    valuable.display();

    Product combined = p1.combineInventory(Product("Laptop Pro", 1000.0, 3));
    cout << "Combined Inventory: ";
    combined.display();

    return 0;
}