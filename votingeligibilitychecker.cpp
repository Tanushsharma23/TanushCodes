/*SET6 P6*/
#include <iostream>
#include <exception>
using namespace std;

class VotingException : public exception {
public:
    const char* what() const noexcept override {
        return "Exception: Not eligible for voting.";
    }
};

int main() {
    int age;
    cin >> age;

    try {
        if (age < 18) {
            throw VotingException();
        }
        cout << "Eligible for voting." << endl;
    } 
    catch (const VotingException& e) {
        cout << e.what() << endl;
    }

    return 0;
}