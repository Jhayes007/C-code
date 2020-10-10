/*
	FileName: Ch4P03.cpp
	Author: J. Hayes
	Date: Sep 12, 2019
	Purpose: To solve Programming Challenge 10 @ end of Chapter 4.
		The inputs are month and year. The ouput should be correct
		# days in a month.
*/

#include <iostream>
using namespace std;

int main()
{

	// Variable declarations
	int month, year, days = 31;

	// Get the month and year
	cout << "Enter a month (1-12): ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;

	// Determine the number of days in the month
	switch (month)
	{
	case 1:
		// January has 31 days
		break;
	case 2:
		// Determine if the year is a leap year
		if ((year % 100 == 0) && (year % 400 == 0) || (year % 4 == 0)
			days = 29;
		else 
			days = 28;
			break;
	case 3 :
		// March has 31 days
	}
}