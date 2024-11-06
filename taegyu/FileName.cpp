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
		name(student_name), id(student_id), major("컴퓨터공학과") {}

	void getName() {
		std::cout << "학생의 이름:" << name;
	}
	void getId() {
		std::cout << "학생의 id:" << id;
	}
	void getMajor() {
		std::cout << "학생의 전공:" << major;
	}
};
