// Korbin Wampler
// Dr. Bekkering
// Spring 2021
// assignment03Spring2021_a
// Description: A simple program that calculates the state tax and county tax and both which is based on user input on how much you spent.
// Status: Completed
// Compiler used:Visual Studio Code
// Help: none


// Sales Tax. Write a program that will compute the total sales tax on a  purchase. Assume the state sales tax is 4 percent and the county sales tax is 2 percent. 
// Use constants for the state sales tax (0.04) and the county sales tax (0.02). Calculate both taxes in step 3.
/* sample output:
How much did you purchase? 95.00
Purchase: $95
State tax: $3.8
County tax: $1.9
Total tax: $5.7

Grading:
    (  25% ): complete header information
    (  25%): uses two constants
    (  25%): for user input
    (  25%): uses four distinct steps with proper documentation
*/

#include <iostream>
using namespace std;
int main()
{
 //Declare Variables

double purchase;
double total;
const double StateTax = 0.04;
const double CountyTax = 0.02;
double resultStateTax;
double resultCountyTax;

 //input
cout << "How much did you purchase? ";
cin >> purchase;


 //Math
resultStateTax = StateTax * purchase;
resultCountyTax = CountyTax * purchase;
total = resultStateTax + resultCountyTax;

 //Output
cout << "Purchase: $" << purchase << endl
     << "State tax: $" << resultStateTax << endl
     << "County tax: $" << resultCountyTax << endl
     << "Total: $" << total << endl;
    return 0;
}

