/*
	Filename: ClassesExample3.cpp
	Author: J.Hayes
	Date: Nov. 12, 2019
	Purpose: To demonstrate how to declare a class and use it. The class here represents
				"rational numbers". In this example we will divide the class into two parts.
				The implementation will be separate from the defintion. The class definition will be in a file of its own and the
				implementation will be in a separate file of its own also. 
*/

#include <iostream>
#include "Rational.h"
using namespace std;

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