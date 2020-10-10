/*
Filename: Arrays4.cpp
	Author : J.Hayes
	Date : October 10, 2019
	Purpose : To demonstrate passing arrays to a function. Complete arrays are passed by reference by default,
			and individual elements of an array are passed by value by default.
	*/

#include <iostream>
using namespace std;

// Function Prototypes
void getArray(double[], int&);
void printArrray(const double[], const int);

const int SIZE = 100;

int main()
{

	double a[SIZE], b[SIZE];
	int n;

	getArray(a, n);
	cout << "The array has " << n << " elements.\nThey are:\n";
	printArray(a, n);

	cout << "Outputing array using the name of the array: " << a << endl;
	// The above statement demonstrates that a numeric array cannot be outputted just be using
	// its name.
	// We cannot assign one numeric array to another. If you need to copy an array to another
	// array, it has to be done element-wise.
	// b = a;

	char mesg[] = "Hello";	// Character arrays are treated differently than numeric arrays.
	cout << mesg << endl;	// char arrays are C-type strings.



}	// end main()


// The getArray() function
void getArray(double a[], int& n)
{
	n = 0;
	cout << "Enter data. Terminate with 0:\n";
	for (n = 0; n < SIZE; n++)
	{
		cout << n + 1 << " : ";
		cin >> a[n];
		if (a[n] == 0) break;

	}	// end for
}	// end getArray()

	// The printArray() function
	void printArray(const double a[], const int n)
	{

		for (int i = 0; i < n; i++)
			cout << "\t" << i << ": " << a[i] << endl;

	}	// end printArray()

