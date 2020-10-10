/*
	Filename: SelectionRepetion.cpp
	Author: J.Hayes
	Date Sep 17, 2019
	Purpose: To integrate the concepts from Chapters 4 and 5. This program
		Includes a menu for the user to make a choice and based on the 
		choice different operations are performed.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//Contstants
	const double ADULTRATE = 50.0;
	const double CHILDRATE = 25.0;
	const double SENIORRATE = 37.50;

	// Variable declarations
	int choice; // for menu choices
	int months; //number of months for membership
	double charges; // monthly charges

	do
	{


		// Display the menu items and get user's choice
		cout << "\nHEALTH CLUB MEMBERSHIP MENU\n\n";
		cout << "     1. Standard Adult Club Membership\n";
		cout << "     2. Child Membership\n";
		cout << "     3. Senior Citizen Membership\n";
		cout << "     4. Quit the program\n\n ";
		cin >> choice;


			
		
			
	}	while (choice )

}	//end main()