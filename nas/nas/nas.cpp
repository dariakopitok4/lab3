// nas.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "author.h"
#include "book.h"
#include "magazine.h"
#include "person.h"
#include "printing.h"
#include "publishing.h"
#include "textbook.h"
#include "locale"
#include <iostream>
#include "author.h"
#include "book.h"
#include "magazine.h"
#include "person.h"
#include "printing.h"
#include "publishing.h"
#include "textbook.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	person p("Gleb","Ivanov",35);
	p.myperson();
	printing pr("Fire");
	pr.myprinting();
	publishing pub("Sky");
	pub.mypublishing();
	author a("Mark", "Twen", 48, 15);
	a.myauthor();
	book b("Gamlet", "Wiliam", "Sheckspir", 40, 80);
	b.mybook();
	magazine m("Star", "Sky", 20);
	m.mymagazine();
	textbook tb("Studentbook", "Best", 85);
	tb.mytextbook();

	
	return 0;
}

