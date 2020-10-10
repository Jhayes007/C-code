/*
	Filename: PointersExample.cpp
	Author : J.Hayes
	Date : October 15, 2019
	Purpose : To demonstrate 1) address operator, 2) declaration of a pointer, 3) pointer intiliaztion,
				4) pointer dereferencing, and 5) the indirection operator.
*/

#include <iostream>
using namespace std;

int main()
{
	int x = 25; // Declaration of an ordinary variable
	int* ptrs; // Declaration of a pointer named ptrs. The base type is int.

	ptrs = &x; // Store the address of x in the pointer ptrs

	cout << "Accessing the value and address using the original variable: \n";
	cout << "The value of x = " << x << endl;
	cout << "The address of x = " << &x << endl;
	cout << "The size of x = " << sizeof(x) << " bytes.\n";
	// Using the pointer
	cout << "Accessing the value and address using the pointer:\n";
	cout << "The address of x = (using ptrs) = " << ptrs << endl;
	cout << "The value of x (using ptrs) = " << *ptrs << endl;
	
	// Date: Oct. 17, 2019
	cout << "The size of ptrs = " << sizeof(ptrs) << " bytes.\n";
	cout << "The address of ptrs = " << &ptrs << endl << endl;

	// Changing the value of x using the pointer
	*ptrs = 100;
	cout << "Once again, here is the value of x:\n";
	cout << x << "\t\t" << *ptrs << endl;

	// Making the pointer point to some other int, other than x
	int y = 50;
	ptrs = &y;
	cout << "The address of y = " << ptrs << endl;
	cout << "The value of y = " << *ptrs << endl << endl;
	cout << "The address of the pointer ptrs = " << &ptrs << endl << endl;

	// The name of a function is a pointer 
	cout << "The name of main() is a pointer to where the function begins: ";
	cout << main << endl;
}	// end main()
