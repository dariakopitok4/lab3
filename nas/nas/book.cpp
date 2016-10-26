#include "stdafx.h"
#include "book.h"
#include "author.h"
#include "printing.h"


book::book(string title, string name, string surname, int age, int number_of_pages_book) :printing(title), author(name,surname,age,number_of_books)
{
	this->number_of_pages_book = number_of_pages_book;
}


book::~book()
{
}
void book::mybook()
{
	cout << "Читайте больше книг!" << endl;
}
