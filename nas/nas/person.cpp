#include "stdafx.h"
#include "person.h"


person::person(string name,string surname,int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	cout << "�����������" << endl;
}


person::~person()
{
	cout << "����������" << endl;
}
void person::myperson()
{
	cout << "� �������!" << endl;
};
