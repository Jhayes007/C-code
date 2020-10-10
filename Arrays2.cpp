/*
	Filename: Arrays2.cpp
	Author: J. Hayes
	Date: October 8, 2019
	Purpose: To demonstrate complete and partial array intialization
	
*/

#include <iostream>
using namespace std;

int main()
{

	const int SIZE = 5;
	double a[SIZE];	// Unintialized array

	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
	cout << endl;

	double b[SIZE] = { 22.2, 33.3, 44.4, 55.5, 66.6 };	// Completely intialized array
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << endl;
	cout << endl;

	double c[SIZE] = { 22.3, 33.3 };	// Partially intialized array
	for (int i = 0; i < SIZE; i++)
		cout << "c[" << i << "] = " << c[i] << endl;
	cout << endl;
}	// end main()