/*
	Filename: ClassesExample1.cpp
	Author: J.Hayes
	Date: Nov. 12, 2019
	Purpose: To demonstrate how to declare a class and use it. The class here represents
				"rational numbers". In this example we will define a class as one would think of a class
				intuitively, "everything in one place."
*/

#include <iostream>
using namespace std;

// The class definition
class Rational
{

private:
	int num, den;	// member variables
public:
	void assign(int n, int d)	// Mutator function
	{
		num = n; den = d;
	}
	double convert()	// Finds the value of a rational number
	{
		return double(num) / den;
	}
	void invert()	// Finds the reciprocal of the rational number
	{
		int temp = num; num = den; den = temp;
	}
	void print()
	{
		cout << num << '/' << den;
	}
};
// End of the class

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