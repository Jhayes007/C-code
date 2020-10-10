/*
	Filename: ClassesExample6.cpp
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: To demonstrate the use of a constructor that accepts an argument and has a default value.
*/

#include <iostream>
#include "sale.h"
using namespace std;

int main()
{

	Sale cashier1;
	Sale cashier2(0.0675);
	float amount;

	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Enter the amount of the sale: ";
	cin >> amount;

	cashier1.calcSale(amount);
	cashier2.calcSale(amount);

	cout << "With a 6% tax rate, the total of the sale is $";
	cout << cashier1.getTotal() << endl;

	cout << "With a 6.75% tax rate, the total of the sale is $";
	cout << cashier2.getTotal() << endl;

}	// end main()