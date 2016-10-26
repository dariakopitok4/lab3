#include "stdafx.h"
#include "author.h"
#include "printing.h"


author::author(string name, string surname, int age, int number_of_books) :person(name,surname,age)
{
	this->number_of_books=number_of_books;
}


author::~author()
{
}
void author:: myauthor()
{
	cout << "Мой любимый автор - Пушкин" << endl;
};
