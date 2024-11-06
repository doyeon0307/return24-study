#include <iostream>
#include<string>
using namespace std;

class Student {
    string name;
    int Id;
    string major;

public:
    void getName(string n) {
        name += n;
    }
    void getId(int i) {
        Id += i;
    }
    void getMajor(string k) {
        major += k;
    }

    Student() : name(""), Id(0), major("컴퓨터공학과") {
        cout << name << Id << major;
    }

    Student(string na, int id) :
        name(na), Id(id), major("컴퓨터공학과") {
        cout << name << Id << major;
    }

    Student(string na, int id, string ma) :
        name(na), Id(id), major(ma) {
        cout << name << Id << major;
    }
};

int main()
{
    
}


