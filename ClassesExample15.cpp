/*
	Filename: ClassesExample15.cpp
	Author: J.Hayes
	Date: Dec. 3, 2019
	Purpose: To demonstrate the use of class aggregation (simply put nesting in classes).
*/

#include "course.h"

int main()
{
	// Create a course object
	Course myCourse("Introduction to Programming/Logic", "Farooqi", "Zareen", "POL M186H",
		"Starting Out With Logic", "Gaddis", "Pearson");

	// Display the course info
	myCourse.print();

	return 0;
}	// end main()