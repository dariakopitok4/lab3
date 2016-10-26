#pragma once
#include <iostream>
using namespace std;
#include "person.h"
class author:public person
{
public:
	int number_of_books;//количество книг
	author(string, string, int, int);
	void setnumber_of_books(int number_of_books);
	void getnumber_of_books();
	~author();
	void myauthor();
};

