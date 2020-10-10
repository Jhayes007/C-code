/*
	Filename: ClassesExample2.cpp
	Author: J.Hayes
	Date: Nov. 12, 2019
	Purpose: To demonstrate how to declare a class and use it. The class here represents
				"rational numbers". In this example we will divide the class into two parts.
				intuitively, "everything in one place."
*/

#include <iostream>
using namespace std;

// The first Part
// The class definition
class Rational
{

private:
	int num, den;	// member variables
public:
	void assign(int n, int d);	// Mutator function
	double convert();	// Finds the value of a rational number
	void invert();	// Finds the reciprocal of the rational number
	void print();
	};
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
}

// The main function
int main()
{
	Rational x;	// Instantiation of an object x of type Rational

	x.assign(22, 7);
	cout << "x = ";
	x.print();
	cout << " = " << x.convert() << endl;
	x.invert();
	cout << "1/x = ";
	x.print();
	cout << endl;
}	// end main()