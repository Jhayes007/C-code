/*
	Filename: ClassesExample8.cpp
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: To demonstrate a class using a private boolean member function.
*/

#include <iostream>
#include "simplestat.h"
using namespace std;

int main()
{

	int num;
	SimpleStat statHelper;

	cout << "Please enter the set of non-negative integers that you\n";
	cout << "Want to average. Separate them with spaces and enter -1 after";
	cout << "The last value.\n\n";

	cin >> num;
	while (num >= 0)
	{

		statHelper.addNumber(num);
		cin >> num;
	}	// end while

	cout << "\nYou entered " << statHelper.getCount() << "values.\n";
	cout << "The largest value was " << statHelper.getLargest() << endl;
	cout << "The average value was " << statHelper.getAverage() << endl;


}