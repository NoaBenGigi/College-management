#include "Employee.h"
#include <string.h>
#include <iostream>
using namespace std;
Employee::Employee(char* name, long int id, int seniority) :Person(name, id)
{//���� �� �������
	this->seniority = seniority;
}
Employee::Employee(const Employee& e) : Person(e)
{//���� �����
	this->seniority = e.seniority;
}
void Employee::print()const
{//����� ������ �� ��������
	cout << "Type: Employee " << endl;
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Seniority: " << seniority <<endl;
}
Employee ::~Employee()
{//������� �����
}