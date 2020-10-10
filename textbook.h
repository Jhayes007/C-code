#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <iostream>
#include <string>
using namespace std;

class TextBook
{
private:
	string title;
	string author;
	string publisher;
public:
	TextBook() // Default constructor
	{
		set("", "", "");
	}	// end constructor

	TextBook(string tt, string auth, string pub)
	{
		set(tt, auth, pub);
	}	// end constructor

	void set(string tt, string auth, string pub)
	{
		title = tt;
		author = auth;
		publisher = pub;
	}	// end set()

	// The print() member function
	void print() const
	{
		cout << "Title" << title << endl;
		cout << "Author" << author << endl;
		cout << "Publisher" << publisher << endl;

	} 
};
#endif // !TEXTBOOK_H

