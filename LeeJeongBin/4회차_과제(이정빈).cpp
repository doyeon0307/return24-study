#include <iostream>
#include <string>
using namespace std;


class Student
{
	string name, major;
	int id;

public: // 멤버 함수
	void getName()
	{
		cout << name << "\n";
	}
	void getId()
	{
		cout << id << "\n";
	}
	void getMajor()
	{
		cout << major << "\n";
	}
	// 모두 받는 생성자
	Student(const string student_name, int student_id, string student_major) :
		name(student_name), id(student_id), major(student_major)
	{

	}
	// 기본 생성자
	Student() : name(""), id(0), major("") {}
	// major만 
	Student(const string student_name, const int student_id) :
		name(student_name), id(student_id), major("컴퓨터공학과") {}
}; // class end


int main()
{
	Student stu1("이정빈", 2024105546, "인공지능학과");
	Student stu2;
	Student stu3("이정빈", 2024105546);

	stu1.getName();  stu1.getId();   stu1.getMajor();
	stu2.getName();  stu2.getId();   stu2.getMajor();
	stu3.getName();  stu3.getId();   stu3.getMajor();
}