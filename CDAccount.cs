/*
 * Project: CDAccount(inheritance)
 * Filename: CDAccount.cs
 * Author: J.Hayes
 * Date: Jan. 27, 2020
 * Purpose: To demonstrate the implementation of inheritance in C#
 *  This class inherits from the SavingsAccount class. In other words SavingsAccount
 *  is the parent (or super) class and this class is the child (or sub) class.
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CDAccount_inheritance_
{
    class CDAccount : SavingsAccount
    {
        // Field
        private string maturityDate;

        // Constructor
        public CDAccount()
        {
            maturityDate = "";
        }   // end constructor

        // Property
        public string MaturityDate
        {
            get { return maturityDate; }
            set { maturityDate = value; }
        }   // end MaturityDate property
    }   // end class
}   // end namespace
