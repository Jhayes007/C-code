/*
	Filename: Arithmetic.Ops
	Author: Jalill Hayes
	Date: August 28, 2019
	Purpose: To demonstrate: variable declarations, the sizeof() operator, 
	and the use of various arithmetic operators.

*/

#include <iostream>
using namespace std;

 int main()
{


	// Variable declarations
	int a, b, c;
	float x, y, z;
	// Example of variable intialization
	int d = 5;

	// Determine the size of a variable (or a data type)
	cout << "The size of a unsigned char is" << sizeof(unsigned char) <<
		"bytes." << endl;
	cout << "The size of a signed char is" << sizeof(signed char) <<
		"bytes." << endl;
	cout << "The size of a short int is" << sizeof(short int) <<
		"bytes." << endl;
	cout << "The size of a unsigned int is" << sizeof(unsigned int) <<
		"bytes." << endl;
	cout << "The size of a unsigned char is" << sizeof(unsigned char) <<
		"bytes." << endl;
	cout << "The size of int is" << sizeof(int) <<
		"bytes." << endl;
	cout << "The size of a signed int is" << sizeof(signed int) <<
		"bytes." << endl;
	cout << "The size of a long int is" << sizeof(long int) <<
		"bytes." << endl;
	cout << "The size of a long long int is" << sizeof(long long int) <<
		"bytes." << endl;
	cout << "The size of a float is" << sizeof(float) <<
		"bytes." << endl;
	cout << "The size of a double is" << sizeof(double) <<
		"bytes." << endl;
	cout << "The size of a long double is" << sizeof(long double) <<
		"bytes." << endl;
	cout << "The size of a bool is" << sizeof(bool) <<
		"bytes." << endl;
	cout << "The size of a is " << sizeof(a) << "bytes." << endl;
	cout << "The size of x is " << sizeof(x) << "bytes." << endl;



	// Arithmetic Operators
	// Assignment statements
	a = 5;
	b = 3;
	c = 2;

	x = 7.5;
	y = 5.3;
	z = 2.4;

	//Arithmetic operations with integers
	cout << endl;
	cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
	cout << "The difference of " << b << " and " << c << " is " << b - c << endl;
	cout << "The product of " << a << " and " << c << " is " << a * c << endl;
	cout << "The quotient of " << a << " divided by " << b << " \n\tis (integer division): " << a / b << endl;
	cout << "The remainder from the division " << a << " by " << b << "\n\tis (modulus operation): " << a % b << endl;

	// Arithmetic operations with floating point numbers
	cout << endl;
	cout << "the sum of " << x << " and " << y << "is: " << x + y << endl;
	cout << "the difference of " << y << "and" << z << "is" << y-z << endl;
	cout << "The product of " << x << " and " << z << " is " << x * z << endl;
	cout << "The quotient of " << x << " divided by " << y << " \n\tis (integer division): " << x / y << endl;
	cout << "Their is no modulus operation for floating-point numbers.";
 
	// Variable scope. A variable is out of scope if you try to access 
	// it before declaration.
	cout << endl;
	int numStudents = 28;
	cout << "Number of students in this class is " << numStudents << endl;
	// int numStudents = 28;

	// Declaring named constants
	const double PI = 3.14159;
	double diameter = 10.0, circumfrence; 
	circumfrence = PI * diameter;
	cout << endl << "The circumfrence of a circle of radius " <<
		diameter / 2.0 << "is " << circumfrence << endl; 

} // end main()