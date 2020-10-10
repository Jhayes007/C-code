/*
	filename: NestedLoops.cpp
	Author: J. Hayes
	Date: Sep, 19, 2019
	Purpose: To demonstrate the functioning of a nested loops.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int numStudents, numTests;
	double total, average;

	cout << fixed << showpoint << setprecision(2);

	// Get the number of students
	cout << "This program averages test scores.\n";
	cout << "How many students are there in the class? ";
	cin >> numStudents;

	// Get the number of test per student
	cout << "How many tests did the students take? ";
	cin >> numTests;

	// Determine the average score for each student
	for (int student = 1; student <= numStudents; student++)
	{
		total = 0; // Intialize the accumaltor for each student
		for (int test = 1; test <= numTests; test++)
		{
			double score;
			cout << "Enter the score " << test << " for " << " for student "
				<< student << ": ";
			cin >> score;
			total += score;


		}	// end inner for
		average = total / numTests;
		cout << "The average score for a student " << student << " is "
			<< average << ".\n\n";
	}	// end outer for


}	// end main()