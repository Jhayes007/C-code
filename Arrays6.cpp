/*
	Filename: Arrays6.cpp
	Author : J.Hayes
	Date : October 10, 2019
	Purpose : To demonstrate the use of two pararllel arrays and the processing of the array elements.
			Here one of the arrays will store the number of hours worked by an employee, and the
			second will hold the pay rate of the employee.
	*/

#include <iostream>
using namespace std;

const int NUMEMPS = 5;

int main()
{

	int hours[NUMEMPS]; // hours worked
	float payRate[NUMEMPS]; // pay rate
	// These 2 arrays are parallel arrays.

	cout << "Enter the hours worked by " << NUMEMPS << " employees "
		<< " and their hourly rate.\n";
	for (int index = 0; index < NUMEMPS; index++)
	{
		cout << "Hours worked by employee # " << (index + 1) << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee # " << (index + 1) << ": ";
		cin >> payRate[index];
	}	// end for

	cout << "\n\nHere is the gross pay for each employee:\n";
	cout.precision(2); // Formatting using only iostream.h
	cout.setf(ios::fixed | ios::showpoint);

	for (int index = 0; index < NUMEMPS; index++)
	{
		float grossPay = hours[index] * payRate[index];
		cout << "Employee # " << (index + 1) << ": $" << grossPay << endl;

	}	// end for

}	// end main()

