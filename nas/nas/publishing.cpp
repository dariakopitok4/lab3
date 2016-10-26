#include "stdafx.h"
#include "publishing.h"


publishing::publishing(string titlepub)
{
	this->titlepub = titlepub;
}


publishing::~publishing()
{
}
void publishing::mypublishing()
{
	cout << "Наше издательство лучшее в городе!" << endl;
};