/*
	Filename: ClassesExample5.cpp
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: To demonstrate the use of constructor and a destructor.
*/

#include <iostream>
using namespace std;

// The class
class Demo
{
public:
	Demo();	// Constructor
	~Demo();	// Destructor

};

// Definition of the constructor
Demo::Demo()
{
	cout << "Welcome to the constructor!\n";

}	// end constructor

// Definiton of the destructor
Demo::~Demo()
{
	cout << "The destructor is now running." << endl;

}	// end destructor

// The main() Function
int main()
{

	Demo demoObj;	// Instantiation of an object of Demo; local scope

	cout << "This program demonstrates an object\n";
	cout << "With a constructor and a destructor.\n";
	cout << endl << endl;

	{
		Demo demoObj1;	// Block scope

	}	// end block
}	// end main()