/*
	Filename: ClassesExample11.cpp
	Author: J.Hayes
	Date: Nov. 21, 2019
	Purpose: To demonstrate the use of static member variables and static member functions.
*/

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	// Use the class name and the scope operator to access the static member function getCount()
	cout << "Number of employees before instantiation of any object is " << Employee::getCount() << endl;

	// Use the new operator to create two new employees
	Employee* e1ptr = new Employee("Susan", "Baker");
	Employee* e2ptr = new Employee("Robert", "Smith");

	// Call the static member function on one of the employees
	cout << "Number of employees after objects are instantiated is " << e1ptr->getCount();

	cout << "\n\nEmployee 1: " << e1ptr->getFirstName() << "   " << e1ptr->getLastName() << endl;
	cout << "Employee 2: " << e2ptr->getFirstName() << "    " << e2ptr->getLastName() << endl;

	// Deallocate memory
	delete e1ptr;
	e1ptr = 0;
	delete e2ptr;
	e2ptr = 0;

	cout << "Number of employees after objects are deleted is " << Employee::getCount() << endl;

	return 0;



}	// end main()