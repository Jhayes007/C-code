/*
	Filename: ClassesExample10.cpp
	Author: J. Hayes
	Date: Nov. 19, 2019
	Purpose: To demonstrate the use of arrays of objects. 
*/

#include <iostream>
#include <iomanip>
#include "inventoryitem.h"
using namespace std;

int main()
{

	const int SIZE = 5;	// Array size

	// Array of objects
	InventoryItem inventory[SIZE] = {
		InventoryItem(1000, "Hammer", 12, 6.96),
		InventoryItem(1050, "Wrench", 20, 8.75),
		InventoryItem(2000, "Pliers", 10, 3.75),
		InventoryItem(2050, "Ratchet", 14, 7.95),
		InventoryItem(3000, "Screw driver", 22, 2.50)
	};

	cout << setw(10) << "Part number " << setw(14) << "Inventory Item"
		<< setw(8) << "Units on hand" << setw(8) << "Cost\n";
	cout << "----------------------------------------------------------";

	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(10) << inventory[i].getPartNum();
		cout << setw(14) << inventory[i].getDescription();
		cout << setw(8) << inventory[i].getOnHand();
		cout << setw(8) << inventory[i].getPrice();
		cout << endl;
	}	// end for


	return 0;

}
