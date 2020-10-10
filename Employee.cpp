/*
	Filename: Employee.cpp
	Author: J.Hayes
	Date: Nov. 21, 2019
	Purpose: To implement class Employee.
*/

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

//	Initialization of the static member variable
int Employee::count = 0;

// Definition of the static member function
int Employee::getCount()
{
	return count;
}	// end getCount()

// Constructor
Employee::Employee(string first, string last)
{
	// firstName = new char[strlen(first) + 1];
	// strcpy(firstName, first);
	firstName = first;

	// lastName = new char[strlen(last) + 1];
	// strcpy(lastName, last);
	lastName = last;

	count++;	// Increment the static member variable

	cout << "Employee constructor for " << firstName << "   " << lastName << "   called." << endl;
}	// end constructor

// Destructor
Employee::~Employee()
{

	cout << "~Employee() called for " << firstName << "   " << lastName << endl;

	// delete[] firstName;
	// delete[] lastName;

	count--;	// Decrement the static member variable
}	// end destructor

string Employee::getFirstName()
{

	return firstName;
}	// end getFirstName()

string Employee::getLastName()
{

	return lastName;
}	// end getLastName()
