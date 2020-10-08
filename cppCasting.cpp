/*
	Filename: CppCasting.cpp
	Author: J.Hayes
	Date: sep 3. 2019
	Purpose: To demonstrate the use of type casting.
*/

#include <iostream>
using namespace std;

int main()
{
	int books, months;
	double booksPerMonth;

	cout << "How many books do you plan to read this summmer? ";
	cin >> books;
	cout << endl << "How many months will that take you? ";
	cin >> months;

	// booksPerMonth = (double)books / months; // C-style casting
	// booksPerMonth = double(books) / months; // Pre-Standard C++ casting
	booksPerMonth = static_cast<double>(books) / months; // Current standard 

	cout << "That is " << booksPerMonth << "books per month.\n";

	// Type casting a printable character from a number (ASCII value)
	int number = 65;
	// Display the number
	cout << endl << "The number is " << number << endl;
	// Display the number converted to char data type
	cout << "After casting to char it becomes " <<
		static_cast<char>(number) << endl;
	cin.ignore();

	char ch; 
	cout << endl << "Enter one character: ";
	cin.get(ch);
	cout << "You entered " << ch << " As a character. " << endl;
	cout << "The ASCII value of this character is " <<
		static_cast<int>(ch) << endl;

} // end main()