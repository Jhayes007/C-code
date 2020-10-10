/*
 * Project: ClassComposition
 * Filename: Date.cs
 * Author: J. Hayes
 * Date: Jan. 22, 2020
 * Purpose: To demonstrate how to nest a class within another class, 
 *          i.o., class composition.
 *          The class is the definition of the Employee class. This class
 *          inlcudes the Date class
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassComposition
{
    class Employee
    {
        // Date Jan. 27, 2020

        public string FirstName { get; private set;  }
        // Backing variable for FirstName is firstName or _firstName
        public string LastName { get; private set; }
        // Backing variables is lastName or _lastName

        // The following 2 properties are objects of type Date.
        // The relationship between these and the Employee is 
        // a "has-a" relationship. 
        public Date BirthDate { get; private set; }
        public Date HireDate { get; private set; }
        // All the properties are auto-implemented

        // Constructor
        public Employee(string first, string last, Date dOB, Date dOH)
        {
            FirstName = first;
            LastName = last;
            BirthDate = dOB;
            HireDate = dOH;
        }   // end constructor

        // Convert Employee to string format
        public override string ToString()
        {
            return string.Format("{0}, {1}, Hired: {2}, Birth: {3}",
                LastName, FirstName, HireDate, BirthDate);
        }   // end ToString()
    }   // end class
}   // end namespace
