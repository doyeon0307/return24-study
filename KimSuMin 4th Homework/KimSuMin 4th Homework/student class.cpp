#include<iostream>
#include<string>
using namespace std;

class Student {
	string name;
	int id;
	string major;

public:
	Student() {
		name = "";
		id = 0;
		major = "";
	}

	Student(const string& stud_name, int stud_id) {
		name = stud_name;
		id = stud_id;
		major = "컴퓨터공학과";
	}

	Student(const string& stud_name, int stud_id, const string& stud_major) :
		name(stud_name), id(stud_id), major(stud_major) {}

	void getName(void) {
		cout << name;
	}
	void getId(void) {
		cout << id;
	}
	void getMajor(void) {
		cout << major;
	}

};
int main() {

	return 0;
}