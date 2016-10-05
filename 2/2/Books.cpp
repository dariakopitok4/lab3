#include "stdafx.h"
#include"Books.h"
#include<iostream>
#include <string>
using namespace std;

void Book::setId(int id){
	Book::id = id;
}
int Book::getId(){
	return Book::id;
}
void Book::setAuthor(string authors) {
	Book::author = authors;
}
string Book::getAuthor() {
	return Book::author;
}
void Book::setTitle(string title) {
	Book::title = title;
}
string Book::getTitle() {
	return Book::title;
}
void Book::displayBook() {
	cout << "ID: " << Book::id << endl;
	cout << "Title: " << Book::title << endl;
	cout << "Author: " << Book::author << endl;
	cout << "Publishing: " << Book::publishing << endl;
	cout << "Year publishing: " << Book::year_publishing << endl;
	cout << "Number of pages: " << Book::number_of_pages << endl;
	cout << "Price: " << Book::price << endl;
	cout << "Binding tipe: " << Book::binding_type << endl;
}
void Book::setPublishing(string publishing) {
	Book::publishing = publishing;
}
string Book::getPublishing() {
	return Book::publishing;
}
void Book::setYear_publishing(int year_publishing) {
	Book::year_publishing = year_publishing;
}
int Book::getYear_publishing() {
	return Book::year_publishing;
}
void Book::setNumber_of_pages(int number_of_pages) {
	Book::number_of_pages = number_of_pages;
}
int Book::getNumber_of_pages() {
	return Book::number_of_pages;
};
void Book::setPrice(int price) {
		Book::price = price;
	}
int Book::getPrice() {
	return Book::price;
	};
void Book::setBinding_type(string binding_type) {
			Book::binding_type = binding_type;
		}
string Book::getBinding_type() {
	return Book::binding_type;
}