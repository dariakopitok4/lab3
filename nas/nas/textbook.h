#pragma once
#include "printing.h"
#include "author.h"
#include "publishing.h"
#include <iostream>
using namespace std;
class textbook:public printing,public publishing
{
public:
	int number_of_pages_textbook;
	textbook(string, string, int);
	void setnumber_of_pages_textbook(int number_of_pages_textbook);
	void getnumber_of_pages_textbook();
	~textbook();
	void mytextbook();
};

