/*
	Filename: StaticVariables.cpp
	Author: J.Hayes
	Date: October 1, 2019
	Purpose: To demonstrate the use and functioning of static variables.

*/

#include <iostream>
using namespace std;

void showStatic();

int main()
{

	// Call the void showStatic() function multiple times
	for (int i = 0; i < 10; i++)
		showStatic();
	// cout << "Thw value of the static variable = " << numCalls << endl;

}	//end main()

void showStatic()
{
	static int numCalls;	// static variables

	cout << "This function has been called " << ++numCalls << " times. " << endl;
}	// end showStatic()