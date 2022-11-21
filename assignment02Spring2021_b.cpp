// Korbin Wampler
// Dr. Bekkering
// spring 2021
// assignment02Spring2021_b
// Description: Calculates the Selling price of a circuit board with its cost and precent profit to find its Selling Price and outputs said price
// Status:Completed
// Compiler used: Visual Studio Code
// Help:None

#include <iostream>
using namespace std;

int main()
{
    //define Variables
    double product_price;
    double percent_profit;
    double selling_price;


    //declare Variables
    product_price = 14.95;
    percent_profit = 0.35;

    //Math
    selling_price = (product_price * percent_profit) + product_price;

    //Output
    cout << "The selling price of a circuit board\n";
    cout << "that costs $14.95 is $" << selling_price;
    return 0;
}


/****************************************************************************************************
Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. Write a program that will calculate the selling price of a circuit board that costs $14.95. 
Display the result on the screen. Use doubles for all numbers. You get the profit percentage and the cost of the board. Calculate the markup and the retail price.

Sample output:
The selling price of a circuit board
that costs $14.95 is $20.1825

Grading:
four distinct sections    (  60%):
correct output              (  20%):
full header information    ( 20%):
    (   pts):
    (   pts):
    (   pts):
    (   pts):

****************************************************************************************************/
