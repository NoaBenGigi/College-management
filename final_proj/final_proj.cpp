/*Noa Ben-gigi-318355633
Lion Dahan-318873338
Eilon Ifrah-207229931
Shira Avital Mahgerefte- 206490799*/
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <string.h>
#include "Person.h"
#include "Student.h"
#include "BA.h"
#include "MA.h"
#include "Practitioner.h"
#include "WorkingStudent.h"
#include "HouseKeeper.h"
#include "Secretary.h"
#include "Lecture.h"
#include "Data.h"
int Person::total_person = 0;
int main()
{
	Data data;
	int choose = 1;
	long id;
	cout << "Hello! welcome to SCE" << endl;
	cout << "plesee choose: " << endl;
	while (choose != 0)
	{
		cout << "1-update person" << endl;
		cout << "2-remove person" << endl;
		cout << "3-find person" << endl;
		cout << "4-print all person" << endl;
		cout << "0- exit" << endl;
		cin >> choose;
		switch (choose)
		{
		case 0:
			cout << "GOOD-BYE ! " << endl;
			break;
		case 1:
			data.init();
			break;
		case 2:
			cout << "Please enter id to remove object: " << endl;
			cin >> id;
			data.operator-=(id);
			break;
		case 3:
			cout << "Please enter id to find its details: " << endl;
			cin >> id;
			data.search(id);
			break;
		case 4:
			data.print_all();
			break;
		default:
			cout << "Wrong Input! Please chose again: " << endl;
			break;
		}
	}
	return 0;
}