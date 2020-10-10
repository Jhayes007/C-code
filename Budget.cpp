/*
	Filename: Budget.cpp
	Author: J. Hayes
	Date: Nov. 26, 2019
	Purpose: Implementation of class Budget.
*/

#include "Budget.h"


// Setting the static member variable
double Budget::corpBudget = 0;

// Definiton of the static member function
void Budget::mainOffice(double moffice)
{
	corpBudget += moffice;
}	// end mainOffice()

