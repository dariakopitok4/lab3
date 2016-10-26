#include "stdafx.h"
#include "person.h"


person::person(string name,string surname,int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	cout << "Конструктор" << endl;
}


person::~person()
{
	cout << "Деструктор" << endl;
}
void person::myperson()
{
	cout << "Я человек!" << endl;
};
