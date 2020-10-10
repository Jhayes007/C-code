/*
	FileName: If_else_if.cpp
	Author: J.Hayes
	Date: Sep 10, 2019
	Purpose: To demonstrate the use of if-else-if statement in C/C++
		This statment occurs when an if statement is nested within the 
		else clause of another if statment.
*/

#include <iostream>
using namespace std;

int main()
{
	int testScore;
	char grade;
	bool goodScore = true;

	// Get a numeric score from the user
	cout << "This program will output the letter grade for a numeric score."
		"\nEnter a numeric score: ";
	cin >> testScore;

	// Determine the letter grade
	if (testScore < 60)
		grade = 'F';
	else if (testScore < 70)
		grade = 'D';
	else if (testScore < 80)
		grade = 'C';
	else if (testScore < 90)
		grade = 'B';
	else if (testScore <= 100)
		grade = 'A';
	else
		goodScore = false;

	// An If-Else statement
	if (goodScore)
		cout << "The grade is " << grade << endl;
	else
		cout << "Invalid grade." << endl;

}	// end main()