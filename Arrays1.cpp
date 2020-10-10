/*
	Filename: Arrays1.cpp
	Author: J. Hayes
	Date: October 8, 2019
	Purpose: To demonstrate how to declare an array, refernce an array element, store values in array
				elements, and retrieve values from array elements.
	*/

#include <iostream>
using namespace std;

int main()
{

	const int SIZE = 4;
	double a[SIZE];	// Array with 4 elements

	cout << "Enter 4 numbers: \n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << i + 1 << ": "; // (i + 1) because the subscripts start at zero.
		cin >> a[i];


	}	// end for

	cout << "Here are the numbers in reverse order: \n";
	for (int i = SIZE - 1; i >= 0; i--)
	{

		cout << "\ta[" << i << "] = " << a[i] << endl;

	}	// end for

}	// end main()