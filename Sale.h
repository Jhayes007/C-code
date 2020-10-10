/*
	Filename: Sale.h
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: Definition of the Sale class.
*/

#ifndef SALE_H
#define SALE_H

class Sale
{
private:
	float taxRate;
	float total;
public:
	Sale(float rate = 0.06)	// The constructor
	{
		taxRate = rate;
	}
	void calcSale(float cost)
	{
		total = cost * (1 + taxRate);
	}
	float getTotal() { return total; }	// Accessor member function
};

#endif	// !SALE_H
