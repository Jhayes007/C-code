/*
	Filename: CStringsExample1.cpp
	Author: J.Hayes
	Date: October 22, 2019
	Purpose: To illustrate the use of some character testing functions.
*/

#include <iostream>
#include <cctype>	// Needed for character testing functions
using namespace std;

int main()
{

	char inp;
	cout << "Enter any character: ";
	cin.get(inp);

	cout << "The character you entered is: " << inp << endl;
	// Testing the type of the character
	if (isalpha(inp))
		cout << "That is an alphanumeric character.\n";
	if (isdigit(inp))
		cout << "That is a numeric digit.\n";
	if (islower(inp))
		cout << "That is a lowercase character.\n";
	if (isupper(inp))
		cout << "That is an uppercase character.\n";
	if (isspace(inp))
		cout << "That is a white space character.\n";
	if (ispunct(inp))
		cout << "That is a punctuation character.\n";
	if (isprint(inp))
		cout << "That is a printable character.\n";
	else
		cout << "That is not a printable character.\n";

}	// end main()