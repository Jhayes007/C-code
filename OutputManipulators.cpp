/*
	Filename: OutputManipulators.cpp
	Author: J. Hayes
	Date: sep 3, 2019
	Purpose: To demonstrate the use of parameterized manipulators to format output.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Integer variable declarations
	int num1 = 2897, num2 = 3, num3 = 8237,
		num4 = 34, num5 = 7, num6 = 16235,
		num7 = 390, num8 = 3456, num9 = 21;

	// Display These Numbers Without Formatting
	// Date: sep. 5, 2019
	cout << "Numbers without formatting: " << endl;
	cout << num1 << "   " << num2 << "   " << num3 << endl; // First row
	cout << num4 << "   " << num5 << "   " << num6 << endl; // Second row
	cout << num7 << "   " << num8 << "   " << num9 << endl; // Third row
	cout << endl << endl;

	// Display These Numbers With Formatting
	cout << "Numbers with formatting: " << endl;
	cout << setw(7) << num1 << "   " << setw(7) << num2
		<< "   " << setw(7) << num3 << endl; // First row
	cout << setw(7) << num4 << "   " << setw(7) << num5
		<< "   " << setw(7) << num6 << endl; // Second row
	cout << setw(7) << num7 << "   " << setw(7) << num8
		<< "   " << setw(7) << num9 << endl; // Third row
	cout << endl << endl;

	//Some of the other manipulators
	cout << fixed << showpoint;
	// These will apply to every numeric output hereafter

	cout << num3 << endl;

	cout << setprecision(3) << num3 << endl;
	// Floating-Point number
	float numf = 2475.7625;

	cout << numf << endl;
	cout << setprecision(1) << numf << endl;
	cout << setprecision(2) << numf << endl;
	cout << setprecision(3) << numf << endl;
	cout << setprecision(4) << numf << endl;
	cout << setprecision(5) << numf << endl;

	cout << setw(15) << numf << endl;
	cout << setw(20) << left << numf << endl;
}	// end main()