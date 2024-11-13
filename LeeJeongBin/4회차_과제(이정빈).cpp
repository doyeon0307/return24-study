#include <iostream>
#include <string>
using namespace std;


class Student
{
	string name, major;
	int id;

public: // ��� �Լ�
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
	// ��� �޴� ������
	Student(const string student_name, int student_id, string student_major) :
		name(student_name), id(student_id), major(student_major)
	{

	}
	// �⺻ ������
	Student() : name(""), id(0), major("") {}
	// major�� 
	Student(const string student_name, const int student_id) :
		name(student_name), id(student_id), major("��ǻ�Ͱ��а�") {}
}; // class end


int main()
{
	Student stu1("������", 2024105546, "�ΰ������а�");
	Student stu2;
	Student stu3("������", 2024105546);

	stu1.getName();  stu1.getId();   stu1.getMajor();
	stu2.getName();  stu2.getId();   stu2.getMajor();
	stu3.getName();  stu3.getId();   stu3.getMajor();
}