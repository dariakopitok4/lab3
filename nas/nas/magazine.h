#pragma once
#include <iostream>
#include "printing.h"
#include "publishing.h"
using namespace std;
class magazine:public printing,public publishing
{
public:
	int number_of_pages_magazine;
	magazine(string, string, int);
	void setnumber_of_pages_magazine(int number_of_pages_magazine);
	void getnumber_of_pages_magazine();
	~magazine();
	void mymagazine();
};

