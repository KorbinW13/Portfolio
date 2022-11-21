// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment04Spring2021_b
// Description: Squares a number this case starting at 10 and goes up with a counter till that counter hits 5
// Status:Completed
// Compiler used:Visual Studio code
// Help:none


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int startNumber, counter;

    startNumber =10;
    counter = 1;

    while (counter <= 5)
    {
        cout << (startNumber + counter) << " squared is " << pow((startNumber + counter),2) << endl; 
        counter++;
    }
    
        return 0;
}


/****************************************************************************************************
Assignment description: CONVERT TO A WHILE (PRE-TEST) LOOP

****************************************************************************************************/
