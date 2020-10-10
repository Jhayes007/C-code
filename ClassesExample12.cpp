/*
	Filename: ClassesExample12.cpp
	Author: J.Hayes
	Date: Nov. 26, 2019
	Purpose: To demonstrate the use of constant objects and constant member functions (the member
				functions to handle constant objects).
*/

#include <iostream>
#include "time.h"
using namespace std;

int main()
{

	Time wakeUp(6, 45, 0);	// non-constant object
	const Time noon(12, 0, 0);	// constant object

								// OBJECT		MEMBER FUNCTION
								
								
	wakeUp.setHour(18);			// non-const	non-const
	// noon.setHour(14);		// const		non-const
	wakeUp.getHour();			// non-const	const
	noon.getMinute();			// const		const

	noon.printUniversal();		// const		const
	// noon.printStandard();	// const		non-const
	wakeUp.printStandard();		// non-const	non-const
	wakeUp.printUniversal();	// non-const	const

}	// end main()

