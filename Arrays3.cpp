/*
	Filename: Arrays3.cpp
	Author: J. Hayes
	Date: October 8, 2019
	Purpose: To demonstrate that in C/C++ one can acccess an area of memory beyond the array.
		NOTE: This program unsafely accesses memory beyond an array's boundary. It compiles and you
			run it, it can possibly overwrite existing data and cause older computers to crash.
			DO NOT DO THIS IN YOUR PROGRAMS AND IN REAL PROGRAMS FOR COMPANIES.
*/

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3
		short values[3];	// An array with 3 elements

	cout << "I will store 5 numbers in this 3-element array! \n";
	for (int i = 0; i < 6; i++)
		values[i] = 100;
	cout << "If you see this message, it means the computer has not crashed! \n";
	cout << "Here are the numbers: \n";
	for (int i = 0; i < 6; i++)
		cout << values[1] << endl;
}	// end main()