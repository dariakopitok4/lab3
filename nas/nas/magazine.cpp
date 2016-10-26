#include "stdafx.h"
#include "magazine.h"
#include "printing.h"
#include "publishing.h"

magazine::magazine(string title, string titlepub, int number_of_pages_magazine) :printing(title), publishing(titlepub)
{
	this->number_of_pages_magazine = number_of_pages_magazine;
}


magazine::~magazine()
{
}
void magazine::mymagazine()
{
	cout << "Наш журнал самый лучший!" << endl;
};