/*
 * Project: CDAccount(inheritance)
 * Filename: SavingsAccount.cs
 * Author: J.Hayes
 * Date: Jan. 27, 2020
 * Purpose: To demonstrate the implementation of inheritance in C#.
 *          This will be the parent class.
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CDAccount_inheritance_
{
    class SavingsAccount
    {
        // Fields 
        private string accountNumber;
        private decimal interestRate;
        private decimal balance;

        // Constructor
        public SavingsAccount()
        {
            accountNumber = "";
            interestRate = 0;
            balance = 0;
        }   // end constructor

        // Properties
        public string AccountNumber
        {
            get { return accountNumber; }
            set { accountNumber = value;  }
        }   // end AccountNumber property

        public decimal InterestRate
        {
            get { return interestRate; }
            set { interestRate = value; }
        }   // end InterestRate property

        public decimal Balance
        {
            get { return balance; }
            set { balance = value; }
        }   // end Balance property
    }   // end class
}   // end namespace
