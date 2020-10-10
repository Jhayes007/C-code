/*
	Filename: Rational.cpp
	Author: J.Hayes
	Date: Nov. 12, 2019
	Purpose: Definitions of the member functions of the class Rational
*/


#include <iostream>
#include "Rational.h"
using namespace std;


// The second part
// Class implementation; This part contains the definitions of the member function
void Rational::assign(int n, int d)
{

	num = n;
	den = d;
}	// end assign

double Rational::convert()
{
	return double(num) / den;
}	// end convert()

void Rational::invert()
{
	int temp = num;
	num = den;
	den = temp;
}	// end invert()

void Rational::print()
{
	cout << num << '/' << den;
}	// end print

