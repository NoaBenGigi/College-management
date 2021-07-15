#include "Secretary.h"

Secretary::Secretary(char* name, long id, long seniority, long phone_num) :Person(name, id), Employee(name, id, seniority)
{//���� �� �������
	this->phone_num = phone_num;
}
Secretary::~Secretary()
{//������� �����
}

int Secretary::salary()
{//����� ������
	return 6000 + this->seniority * 300;
}

void Secretary::print() const
{
	cout << "Type: Secretary" << endl;
	cout << "Name: " << name << endl;
	cout << "Id: " << id << endl;
	cout << "Seniority:" << seniority << endl;
	cout << "Phone number:" << phone_num << endl;
}
