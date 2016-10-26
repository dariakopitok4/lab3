#pragma once
#include <iostream>
using namespace std;
class person
{ 
public:
	string name;
	string surname;
	int age;

public:
	person(string,string,int);
	void setname(string);
	void getname();
	void setsurname(string);
	void getsurname();
	void setage(int);
	void getage();
	~person();
	void myperson();
};

