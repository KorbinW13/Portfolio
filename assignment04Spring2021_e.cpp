// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment04Spring2021_e
// Description:a for loop that i converted to a do while loop and it squares a starting number 10 and squaring up to starting number 15
// Status:completed
// Compiler used:Visual Studio Code
// Help:none

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int startNumber, counter;

    startNumber =10;
    counter = 1;
    
    do
    {
        cout << (startNumber + counter) << " squared is "
                << pow((startNumber + counter),2) << endl;
        counter++;
    } while (counter <= 5);



        return 0;
}


/****************************************************************************************************
Assignment description:CONVERT TO A DO WHILE LOOP

****************************************************************************************************/
