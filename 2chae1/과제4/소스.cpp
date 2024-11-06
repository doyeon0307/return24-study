#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    string major;

public:
    Student() : name(""), id(0), major("��ǻ�Ͱ��а�") {}
    Student(string name, int id) : name(name), id(id), major("��ǻ�Ͱ��а�") {}
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
    Student student("��ä��", 67890, "�ΰ������а�");
    student.displayInfo();

}