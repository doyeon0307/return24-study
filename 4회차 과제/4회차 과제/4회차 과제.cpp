#include <iostream>
#include<string>
using namespace std;

class Student {
    string name;
    int Id;
    string major;

public:
    void getName() {
        cout << name;
    }
    void getId() {
        cout << Id;
    }
    void getMajor() {
        cout << major;
    }

    Student() : name(""), Id(0), major("") {
    }

    Student(string na, int id) :
        name(na), Id(id), major("컴퓨터공학과") {
    }

    Student(string na, int id, string ma) :
        name(na), Id(id), major(ma) {
    }
};

int main()
{
    
}


