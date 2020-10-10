/*
	filename: BreakContinue.cpp
	Author: J. Hayes
	Date: Sep, 17, 2019
	Purpose: To demonstrate the use of break and continue statements in loops.
*/

#include <iostream>
using namespace std;

int main()
{

	int n; // To hold user input

	// The following is an infinite loop. DO NOT USE IT IN PRACTICE, UNLESS
	// there is a specific need (like to create a server).
	for (;;)
	{

		cout << "Enter an integer: ";
		cin >> n;
		if (n % 2 == 0) continue;
		if (n % 3 == 0) break;
		cout << "\nBottom of the loop.\n";

	}	// end for

	cout << "\t Outside of the loop.\n";

}	// end main()