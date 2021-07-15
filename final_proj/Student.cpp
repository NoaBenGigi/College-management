#include "Person.h"
#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;
Student::Student(char* name, long id, float average, int num_of_courses):Person(name, id)
{//����
	this->average = average;
	this->num_of_courses = num_of_courses;
}
Student::Student(const Student& s) :Person(s)
{//���� �����
	average = s.average;
	num_of_courses = s.num_of_courses;
}
void Student::print()const
{//����� ������ �� ��������
	cout << "Type: Student" << endl;
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Average= " << average << endl;
	cout << "Number Of Courses: " << num_of_courses << endl;
}
Student:: ~Student()
{//������� �����
}