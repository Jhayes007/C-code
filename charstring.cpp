/*
	Filename: charstring.cpp
	Author: Jalill Hayes
	Date: Aug 28, 2019
	Purpose: To demonstrate the char, string, and bool data types.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char letter;

	letter = 'D';
	cout << letter << '\n';

	letter = 'G';
	cout << letter << '\n';

	// Date: Sep. 03, 2019
	string title; 

	title = "Gone with the wind";

	cout << "A classic movie is:" << title << endl;

	bool bValue;

	bValue = true;
	cout << bValue << endl;

	bValue = false;
	cout << bValue << endl;
	cout << endl;

} // end main()