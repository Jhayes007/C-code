/*
	Filename: ClassesExample9.cpp
	Author: J. Hayes
	Date: Nov. 19, 2019
	Purpose: To demonstrate passing an object to a function. The argument is being
			passed by reference to one function and by value to the second function.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "inventoryitem.h"
using namespace std;

// Function prototypes
void storeValues(InventoryItem&);
void showValues(InventoryItem);

// the main() function
int main()
{
	InventoryItem part; // instantiation of an object

	storeValues(part);
	showValues(part);

	return 0;
}	// end main()

void storeValues(InventoryItem& item)
{

	int partNum;
	string description;
	int qty;
	double price;

	// Get the data from the user
	cout << "Enter the data for the new part \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.ignore();
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;

	item.storeInfo(partNum, description, qty, price);
}	// end storeValues()

void showValues(InventoryItem item)
{

	cout << fixed << showpoint << setprecision(2) << endl << endl;
	cout << "Part number: " << item.getPartNum() << endl;
	cout << "Description: " << item.getDescription() << endl;
	cout << "Units on hand: " << item.getOnHand() << endl;
	cout << "Price: " << item.getPrice() << endl;
	cout << endl;
}	// end showValues()
