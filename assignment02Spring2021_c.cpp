// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment02Spring2021_c
// Description:Calculates the amount of customers who were surveyed's amount of drinks of people who buy 1 or 2 cans a week 
//             and the amount of said people who buy 1 or more like citrus-flavored soda. Then displays that data.
// Status:Completed
// Compiler used:Visual Studio Code
// Help:None

#include <iostream>
using namespace std;

int main()
{
    //declare Variables
    int customers;
    int amount_buy_drink;
    int amount_prefer_citrus;

    //define Variables
    customers = 16500;

    //Calculating approximate number of people
    amount_buy_drink = (customers * 0.15);

    amount_prefer_citrus = (amount_buy_drink * 0.58);

    //Output
    cout << amount_buy_drink << " customers purchased one or more energy drinks per week.\n";
    cout << amount_prefer_citrus << " of those customers preferred citurs flavored energy drink.\n";

    return 0;
}


/****************************************************************************************************
Energy Drink Consumption

A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. 
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:
�The approximate number of customers in the survey who purchase one or more energy drinks per week
�The approximate number of customers in the survey who prefer citrus-flavored energy drinks

Sample output:
2474 customers purchased one or more energy drinks per week.
1434 of those customers preferred citrus flavored energy drink.

Grading:
 full header   (  20%):
 four distinct sections   (  60%):
 use of constants   ( 20%):
    (   pts):
    (   pts):
    (   pts):

****************************************************************************************************/
