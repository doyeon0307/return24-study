#include <iostream>
#include <string>

class Student {
	std::string name;
	int id;
	std::string major;

public:
	Student(const std::string& student_name, int student_id, const std::string& student_major):
		name(student_name),id(student_id),major(student_major) {}
	Student():name(""),id(0),major("") {}
	Student(const std::string& student_name, int student_id) :
		name(student_name), id(student_id), major("��ǻ�Ͱ��а�") {}

	void getName() {
		std::cout << "�л��� �̸�:" << name;
	}
	void getId() {
		std::cout << "�л��� id:" << id;
	}
	void getMajor() {
		std::cout << "�л��� ����:" << major;
	}
};
