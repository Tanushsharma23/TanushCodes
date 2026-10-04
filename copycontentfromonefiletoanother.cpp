/*SET6 P10*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("source.txt");
    ofstream dest("destination.txt");

    if (!src) {
        cerr << "Error: Could not open source.txt" << endl;
        return 1;
    }

    if (!dest) {
        cerr << "Error: Could not create destination.txt" << endl;
        return 1;
    }

    dest << src.rdbuf(); 

    cout << "File copied successfully." << endl;

    src.close();
    dest.close();

    return 0;
}