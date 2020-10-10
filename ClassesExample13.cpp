/*
	Filename: ClassesExample13.cpp
	Author: J. Hayes
	Date: Nov. 26, 2019
	Purpose: To demonstrate the use of friend functions and static member functions.
*/

#include <iostream>
#include <iomanip>
#include "Budget.h"
#include "Auxil.h"
using namespace std;

int main()
{

	int count;
	double mainOfficeBudgetRequest;
	const int NUMDIVISIONS = 4;

	// Get the main office's budget requests
	cout << "Enter the main office's budget request: ";
	cin >> mainOfficeBudgetRequest;
	Budget::mainOffice(mainOfficeBudgetRequest);

	Budget divisions[NUMDIVISIONS];	// Array of budget objects
	AuxiliaryOffice auxOffices[NUMDIVISIONS];	// Array of AuxiliaryOffice objects

	// Get the budget requests for each division and their auxiliary offices
	for (count = 0; count < NUMDIVISIONS; count++)
	{
		double budgetAmount;	// To hold input

		// Get the request for division offices
		cout << "Enter the budget request for division " << (count + 1) << ": ";
		cin >> budgetAmount;
		divisions[count].addBudget(budgetAmount);

		// Get the request for the auxiliary office
		cout << "Enter the budget request for that division's auxiliary office: ";
		cin >> budgetAmount;
		auxOffices[count].addBudget(budgetAmount, divisions[count]);


	}	// end for

	// Display the budget requests and the corporate budget
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the division budget requests:\n";
	for (count = 0; count < NUMDIVISIONS; count++)
	{
		cout << "\tDivision " << (count + 1) << "\t\t$";
		cout << divisions[count].getDivisionBudget() << endl;
		cout << "t\Auxiliary office:\t$";
		cout << auxOffices[count].getDivisionBudget() << endl << endl;
	}	// end for

	//Display the corporate budget
	cout << "Total Budget request:\t$";
	cout << divisions[0].getCorpBudget() << endl;
}	// end main()

