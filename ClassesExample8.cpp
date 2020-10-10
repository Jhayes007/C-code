/*
	Filename: SimpleStat.cpp
	Author: J.Hayes
	Date: Nov. 14, 2019
	Purpose: To implement the class SimpleStat.
*/

#include "SimpleStat.h"
using namespace std;

SimpleStat::SimpleStat()
{
	largest = sum = count = 0;
}	// end constructor

bool SimpleStat::addNumber(int num)
{
	bool goodNum = true;

	if (num >= 0)	// if num is valid, i.e., positive
	{

		sum += num; // Add it to sum
		count++;	// Count it 
		if (isNewLargest(num))	// find if it is the largest
			largest = num;
	}
	else   // if num is invalid
	{
		goodNum = false;
	}	// end if-else

	return goodNum;
}	// end::addNumber()

bool SimpleStat::isNewLargest(int num)
{
	if (num > largest)
		return true;
	else
		return false;
}	// end::isNewLargest()

double SimpleStat::getAverage()
{

	if (count > 0)
		return static_cast<double>(sum) / count;
	else
		return 0;
}	// end getAverage()
