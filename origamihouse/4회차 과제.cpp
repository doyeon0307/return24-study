#include <iostream>
#include <string>

class Student {
	std::string name, major;
	int id;
public:
	void getName(std::string name) {
		std::cout << name;
	}
	void getId(int id) {
		std::cout << id;
	}
	void getMajor(std::string major) {
		std::cout << major;
	}
	Student() {}
	Student(std::string name, int id, std::string major = "��ǻ�Ͱ��а�") :name(name), id(id), major(major) {}
};