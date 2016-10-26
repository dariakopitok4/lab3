// 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Books.h"
#include<iostream>
using namespace std;

Book setBook(int id, string title, string author, string publishing, int year_publishing, int number_of_pages,int price,string binding_type)
{
	Book book;
	book.setId(id);
	book.setTitle(title);
	book.setAuthor(author);
	book.setPublishing(publishing);
	book.setYear_publishing(year_publishing);
	book.setNumber_of_pages(number_of_pages);
	book.setPrice(price);
	book.setBinding_type(binding_type);
	return book;
};

int _tmain(int argc, _TCHAR* argv[])
{
	const int countOfBooks = 5;
	string searchAuthor;
	int searchYear;
	Book books[countOfBooks];
	books[0] = setBook( 1, "Jane Air", "Sharlote Bronte","Omega", 1910, 95,11,"Soft" );
	books[1] = setBook(2, "Proud and Predictions", "Jane Ostin", "Star", 1813, 372, 17, "Hard");
	books[2] = setBook(3, "Red Hat", "Piero", "Magic", 1697, 15, 9, "Soft");
	books[3] = setBook(4, "Code Da Vinci", "Dan Braun", "Star", 2003, 500, 15, "Hard");
	books[4] = setBook(5, "Anna Karenina", "Tolstoy", "Omega", 1878, 723, 20, "Hard");
	cout << "Enter author" << endl;
	cin >> searchAuthor;
	cout << "Enter year" << endl;
	cin >> searchYear;
	
	string bookAuthor;
	int bookYear;
	for (int i = 0; i < countOfBooks; i++) {
		bookAuthor = books[i].getAuthor();
		if (bookAuthor == searchAuthor){
			cout << "Book(s) this author:" << endl;
			cout << "  " << endl;
			books[i].displayBook();
		}
	};
	for (int i = 0; i < countOfBooks; i++) {
		bookYear = books[i].getYear_publishing();
		if (bookYear >= searchYear){
			cout << "Book(s) after this year:" << endl;
			cout << "  " << endl;
			books[i].displayBook();
		}
	};

	//book1.setTitle("Red Hat");
	//book1.setAuthor("Anderson");
	//string titleToDisplay = book1.getTitle();
	//string authorToDisplay = book1.getAuthor();
	//cout << titleToDisplay << endl;
	//cout << authorToDisplay << endl;
	/*a1.setPublishing("Dod");
	a1.setYear_publishing(1520);
	a1.setNumber_of_pages(52);
	a1.setPrice(52);
	a1.setBinding_type("mr");*/
	/*a2.setTitle("Get");
	a2.setAuthor("Po");*/
	/*a2.setPublishing("Dod");
	a2.setYear_publishing(1520);
	a2.setNumber_of_pages(52);
	a2.setPrice(52);
	a2.setBinding_type("mr");
	a1.print();
	a2.print();*/

	return 0;
}

