#include <iostream>
#include <string>

class Student {
private:
	std::string name;
	int id;
	std::string major;

public:
	Student(): name(""), id(0), major("컴퓨터공학과"){}

	Student(const std::string& student_name, int student_id):
		name(student_name), id(student_id), major("컴퓨터공학과"){}

	Student(const std::string& student_name, int student_id, const std::string& student_major) :
		name(student_name), id(student_id), major(student_major) {}

	void getName() {
		std::cout << "Name: " << name << std::endl;
	}

	void getId() {
		std::cout << "ID: " << id << std::endl;
	}

	void getMajor() {
		std::cout << "Major: " << major << std::endl;
	}
};