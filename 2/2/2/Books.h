#pragma once
#include"string.h"
#include <string>
using namespace std;
class Book {
private:
	int id;
	string title;
	string author;
	string publishing;
	int year_publishing;
	int number_of_pages;
	int price;
	string binding_type;
public:
	   void setId(int);
	   void setTitle(string);
	   void setAuthor(string);
	   void displayBook();
	   void setPublishing(string);
	   void setYear_publishing(int);
	   void setNumber_of_pages(int);
	   void setPrice(int);
	   void setBinding_type(string);
	   int getId();
	   string getTitle();
	   string getAuthor();
	   string getPublishing();
	   int getYear_publishing();
	   int getNumber_of_pages();
	   int getPrice();
	   string getBinding_type();

};