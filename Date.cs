/*
 * Project: ClassComposition
 * Filename: Date.cs
 * Author: J. Hayes
 * Date: Jan. 22, 2020
 * Purpose: To demonstrate how to nest a class within another class, 
 *          i.o., class composition.
 *          the class is the definition of the Date class.
 */


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassComposition
{
    class Date
    {
        private int month;  // 1-12
        private int day;    // 1-31 based on month

        // Constructor
        public Date(int theM, int theD, int theY)
        {
            Month = theM;
            Year = theY;
            Day = theD;
            Console.WriteLine("Date object constructor for data {0}", this);
        }   // end constructor

        // Property Month
        public int Month
        {
            get
            {
                return month;
            }   // end get
            private set // make writing inaccessible outside the class
            {
                if (value > 0 && value <= 12)   // validate month
                    month = value;
                else // invalid month
                    throw new ArgumentOutOfRangeException("Month", value,
                        "Month must be within 1 and 12.");
            }   // end set
        }   // end property Month

        // property Day
        public int Day
        {
            get
            {
                return day;
            }   // end get
            private set
            {
                int[] daysPerMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31,
                    30, 31, 30, 31};
                // Check if day is in range for the month
                if (value > 0 && value <= daysPerMonth[Month])
                    day = value;
                // Check if leap year
                else if (Month == 2 && value == 29 && (Year % 400 == 0 ||
                    (Year % 4 == 0 && Year % 100 != 0)))
                    day = value;
                else
                    throw new ArgumentOutOfRangeException("Day", value,
                        "Day out of range for current month/year.");
            }   // end set
        }   // end property Day

        public int Year // auto-implemented property
        {
            get;
            private set;
        }   // end of the Year property

        public override string ToString()
        {
                return string.Format("{0}/{1}/{2}", Month, Day, Year);
             
        }   // end ToString()             
    }   // end class
}   // end namespace
