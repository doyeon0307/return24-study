#include <iostream>
#include <string>
using namespace std;

class Student {
	string name, major;
	int id;

public:
	Student() :
		name("이름"), id(0), major("전공") {}

	Student(string stu_name, int stu_id) :
		name(stu_name), id(stu_id), major("컴퓨터공학과") {}

	Student(string stu_name, int stu_id, string stu_major) :
		name(stu_name), id(stu_id), major(stu_major) {}

	void getName() {
		cout << name;
	}
	void getId() {
		cout << id;
	}
	void getMajor() {
		cout << major;
	}
};

int main() {
	Student pum;
	Student nyw("박성민", 2024105456);
	Student psm("박성민", 2024105456, "컴퓨터공학과");

	pum.getName();
	cout << " ";
	pum.getId();
	cout << " ";
	pum.getMajor();
	cout << endl;

	nyw.getName();
	cout << " ";
	nyw.getId();
	cout << " ";
	nyw.getMajor();
	cout << endl;

	psm.getName();
	cout << " ";
	psm.getId();
	cout << " ";
	psm.getMajor();
}