/*
	Filename: SaleOV.h
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: Definition of the SaleOV class.
*/

#ifndef SALEOV_H
#define SALEOV_H

class Sale
{
private:
	float taxRate;
	float total;
public:
	Sale()	// The default constructor
	{
		taxRate = 0.0;
	}

	Sale(float rate)	// The constructor that takes one argument
	{
		taxRate = rate;
	}
	void calcSale(float cost)
	{
		total = cost * (1 + taxRate);
	}

	float getTotal() { return total; }	// Accessor member function
};

#endif	// !SALEOV_H
