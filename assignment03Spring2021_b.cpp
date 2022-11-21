// Korbin Wampler
// Dr. Bekkering
// Spring 2021
// assignment03Spring2021_b
// Description: A short code that allows one to calculate how much the tip and tax and total of a meal charge of your choosing
// Status: Completed
// Compiler used:Visual Studio Code
// Help:none
/****************************************************************************************************
Restaurant Bill. Write a program that computes the tax and tip on a restaurant bill for a patron with a user-selected meal charge. 
The tax should be 6.75 percent of the meal cost. 
The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen. 
Use constants for tax (0.0675) and tip (0.2).

Sample output:
How much did the meal cost? $88.67
Tax: $5.98523
Tip: $18.931
Total: $113.586

Grading:
    (  25%): complete header information
    (  25%): uses two constants for tax and tip
    (  25%): uses four distinct steps with clear documentation
    (  25%): dollar amounts clearly marked with $
****************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
 //Declare Variables
double cost;
double total;
const double TaxPercent = 0.0675;
const double TipPercent = 0.2;
double Tax;
double Tip;

 //Input cost
cout << "How much did the meal cost? $";
cin >> cost;

 //calculations for Tax Tip and Total
Tax = TaxPercent * cost;
Tip = TipPercent * (cost + Tax);
total = Tax + Tip + cost;

 //Output
cout << "Tax: $" << Tax << endl
     << "Tip: $" << Tip << endl
     << "Total: $" << total << endl;

    return 0;
}


