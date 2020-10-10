/*
	Filename: Auxil.cpp
	Author: J. Hayes
	Date: Nov. 26, 2019
	Purpose: Implementation of the class AuxilaryOffice.
*/

#include "Auxil.h"
#include "Budget.h"

// Definition of the member function mainOffice() that has an argument that is a reference to
// the Budget class

void AuxiliaryOffice::addBudget(double b, Budget& div)
{
	auxBudget += b;
	div.getCorpBudget += b;
}	// end addBudget()


