/*
	Filename: CppStrings1.cpp
	Author: J.Hayes
	Date: October 24, 2019
	Purpose: To demonstrate string comparison in C++ strings.
*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{

	const double APRICE = 249.0;	// Price of part A
	const double BPRICE = 299.0;	// Price of part B
	string partNum; // Part number

	cout << "The device part numbers are: \n";
	cout << "\nBoom Box, part number S147-29A\n";
	cout << "\nSheIf Model, part number S147-29B\n";
	cout << "Enter the part number of the device you wish to purchase: ";
	cin >> partNum;

	cout << fixed << showpoint << setprecision(2);

	if (partNum == "S147-29A")
		cout << "The price is $" << APRICE << endl;
	else if (partNum == "S147-29B")
		cout << "The price is $" << BPRICE << endl;
	else
		cout << partNum << " is not a valid part number.\n";
}	// end main()