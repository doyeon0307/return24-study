#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    string major;

public:
    Student() : name(""), id(0), major("컴퓨터공학과") {}
    Student(string name, int id) : name(name), id(id), major("컴퓨터공학과") {}
    Student(string name, int id, string major) : name(name), id(id), major(major) {}
    string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    string getMajor() const {
        return major;
    }
    void displayInfo() const {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getId() << endl;
        cout << "Major: " << getMajor() << endl;
    }
};

int main() {
    Student student("이채원", 67890, "인공지능학과");
    student.displayInfo();

}