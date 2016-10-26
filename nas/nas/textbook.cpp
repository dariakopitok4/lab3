#include "stdafx.h"
#include "textbook.h"
#include "printing.h"
#include "author.h"
#include "publishing.h"


textbook::textbook(string title, string titlepub, int number_of_pages_textbook):printing(title),publishing(titlepub)
{
	this->number_of_pages_textbook = number_of_pages_textbook;
}


textbook::~textbook()
{
}
void textbook::mytextbook()
{
	cout << "Учебник твой главный друг" << endl;
};
