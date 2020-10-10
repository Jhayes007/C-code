/*
 * Project: ExceptionClassProperties
 * Filename: Program.cs
 * Author: J. Hayes
 * Date: Feb, 17, 2020
 * Purpose: to demonstrate some properties of the Exception class in C#.
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExceptionClassProperties
{
    class Program
    {
        static void Main(string[] args)
        {
            // Call Method1():
            try
            {
                Method1();
            }
            catch (Exception exParameter)
            {
                // Output the string representation of the Exception, then
                // output properties Message, StackTrace, and InnerException.
                Console.WriteLine("exParameter.ToString(): \n" +
                    exParameter.ToString());
                Console.WriteLine("\nexParameter.Message: \n" +
                    exParameter.Message);
                Console.WriteLine("\nexParameter.StackTrace: \n" +
                    exParameter.StackTrace);
                Console.WriteLine("\nexParameter.InnnerException: \n" +
                    exParameter.InnerException);
            }   // end try/catch block
        }   // end main()

        // Method1() - calls Method2()
        static void Method1()
        {
            Method2();
        }   // end Method2()

        // Method2() - calls Method3()
        static void Method2()
        {
            Method3();
        }   // end Method2()

        // Method3()
        // Will throw an Exception containing an InnerException
        static void Method3()
        {
            // Try to convert a string to int
            try
            {
                int.Parse("Not an integer");
            }
            catch ( FormatException formatExParam)
            {
                // Wrap FormatException in new Exception
                throw new Exception("Exception occured in Method3()",
                    formatExParam);
            }   // end try/catch block
        }   // end Method3()
    }   // end class
}   // end namespace
