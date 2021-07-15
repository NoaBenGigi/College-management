#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
#include <iostream>
#include <string.h>
using namespace std;
Person::Person(char* name, long id)
{//����
	this->name = new char[strlen(name) + 1];//����� ������� ���
	strcpy(this->name, name);
	this->id = id;
	total_person++;
}
Person::Person(const Person& p)
{//���� �����
	name = new char[strlen(p.name) + 1];
	strcpy(name, p.name);
	id = p.id;
	total_person++;
}
void  Person::print() const
{//����� ������ �� ��������
	cout << "Type: Person " << endl;
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
}
Person::~Person()
{//������� �����
	delete[] name;//����� ������
	total_person--;
}
void Person::print_static()
{
	cout << "Number Of Person: " << total_person<<endl;
}
