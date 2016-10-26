#pragma once
#include<iostream>
#include "printing.h"
#include "author.h"
using namespace std;
class book :public printing, public author
{
public:
	int number_of_pages_book;
	book(string,string,string,int,int);
	void setnumber_of_pages_book(int number_of_pages_book);
	void getnumber_of_pages_book();
	~book();
	void mybook();
};

