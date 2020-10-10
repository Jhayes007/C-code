/*
	Filename: Arrays4.cpp
	Author: J. Hayes
	Date: October 10, 2019
	Purpose: To demonstrate the use of a range-based loop in C++.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

	// Declare 2 arrays
	int nums[] = { 10, 20, 30, 40, 50 };
	string planets[] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune" };

	// Display the value of stored in the integer array
	for (int val : nums)
		cout << val << endl;

	cout << endl << "Here is the list of the planets: \n";
	for (auto val : planets)
		cout << val << endl;

	// To change the values in an array you need a reference variable as the loop control variable
	cout << endl;
	cout << "Enter new integers for the integer array: \n";
	for (int& val : nums)
		cin >> val;
	cout << "Here is the new nums array:\n";
	for (auto val : nums)
		cout << val << endl;

}	// end main()
