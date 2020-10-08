/*
	Filename: RollingDice.cpp
	Author: J. Hayes
	Date: Sep. 5, 2019
	Purpose: To demonstrate how to generate random numbers and also
		to integrate some of the concepts that have been covered up
		to now.
		This program simulates the roll of two dice.
*/

#include <iostream>
#include <cstdlib> // For the random number generator
#include <ctime>   // Needed for time function
using namespace std;

int main()
{

	// Constants
	const int MinValue = 1;
	const int MaxValue = 6;

	// Variables
	int die1; // First die
	int die2; // Second die

	// Get the system time to seed the random number generator
	unsigned seed = time(0);
	srand(seed);

	cout << "Rolling the dice ...... \n";
	die1 = (rand() % (MaxValue - MinValue) + 1) + MinValue; // To generate a number between 1 & 6
	die2 = (rand() % (MaxValue - MinValue) + 1) + MinValue;
	cout << die1 << endl;
	cout << die2 << endl;

}	// end main()