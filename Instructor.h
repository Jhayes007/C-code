/*
	Filename: Instructor.h
	Author: J. Hayes
	Date: Dec. 3, 2019
	Purpose: To 
*/
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>
using namespace std;

// Definition of class instructor
class Instructor
{
private:
	string lastName;
	string firstName;
	string officeNumber;
public:
	// Default constructor
	Instructor()
	{
		set("", "", "");
	}	// end constructor

	// Second constructor
	Instructor(string ln, string fn, string on)
	{
		set(ln, fn, on);
	}	// end constructor

	// Set function
	void set(string ln, string fn, string on)
	{
		lastName = ln;
		firstName = fn;
		officeNumber = on;
	}	// end set

	void print() const
	{
		cout << "Last name: " << lastName << endl;
		cout << "First name: " << firstName << endl;
		cout << "Office number: " << officeNumber << endl;
	}	
};






#endif // !INSTRUCTOR_H
