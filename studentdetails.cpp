#include <iostream>
using namespace std;
class Student {
    private:
        string name;
        int rollno;
    public:
    void setdata(string n,int r){
        name=n;
        rollno=r;
    }
    void displaydata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }

};
int main(){
    Student s1;
    s1.setdata("Tanush",23);
    s1.displaydata();
    return 0;
}