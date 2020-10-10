/*
	Filename: Simplestat.h
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: To define the class Simplestat.
*/

#ifndef SIMPLE_STAT
#define SIMPLE_STAT

struct SimpleStat
{
private:
	int largest, sum, count;
	// largest = largest number received so far
	// sum = sum of the numbers so far, and
	// count = how many numbers have been entered so far
	bool isNewLargest(int);		// private boolean member function
public:
	SimpleStat();	// Default Constructor
	bool addNumber(int);
	double getAverage();
	// Accessors
	int getLargest() { return largest;  }
	int getCount() { return count;  }
};


#endif // !SIMPLE_STAT