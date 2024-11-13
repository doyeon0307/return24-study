#include <iostream>
#include <string>
using namespace std;

class Student {
	string name, major;
	int id;

public:
	Student() :
		name("�̸�"), id(0), major("����") {}

	Student(string stu_name, int stu_id) :
		name(stu_name), id(stu_id), major("��ǻ�Ͱ��а�") {}

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
	Student nyw("�ڼ���", 2024105456);
	Student psm("�ڼ���", 2024105456, "��ǻ�Ͱ��а�");

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