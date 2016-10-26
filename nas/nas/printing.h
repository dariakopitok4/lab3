#pragma once
#include <iostream>
using namespace std;
class printing
{
public:
	string title;
public:
	printing(string);
	void settitle(string title);
	void gettitle();
	~printing();
	void myprinting();
	class number_printing
	{
	public:
		int number_of_book,number_of_magazine,number_of_textbook;
		number_printing();
		~number_printing();


	};
};

