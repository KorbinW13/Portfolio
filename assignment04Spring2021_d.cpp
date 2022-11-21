// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment04Spring2021_d
// Description:squares a starting number 10 with a counter going up increasing the starting number on loop until counter hits 5
// Status:completed
// Compiler used:Visual Stuido Code
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
Assignment description:CONVERT TO A DO WHILE (POST_TEST) LOOP

****************************************************************************************************/
