#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "instructor.h"
#include "textbook.h"
using namespace std;

// Defintion of the Course class
class Course
{
private:
	string courseName;
	Instructor Instructor;	// Instructor
	TextBook textbook;	// Textbook
public:
	// Constructor
	Course(string course, string instrLn, string instrFn, string instrOn, string tt, string auth, string pub)
	{

		// Assign the course name
		courseName = course;
		// Assign the instructor
		Instructor.set(instrLn, instrFn, instrOn);
		// Assign the textbook
		textbook.set(tt, auth, pub);
	}	// end constructor

	// The print member function
	void print() const
	{
		cout << "Course name: " << courseName << endl;
		cout << "Instructor information:\n";
		Instructor.print();
		cout << "Textbook information:\n";
		textbook.print();
	}	// end print()
};	// end class







#endif // !COURSE_H

