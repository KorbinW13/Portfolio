// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment04Spring2021_c
// Description: squares a number starting at 10 and continues until starting number hits 14
// Status:completed
// Compiler used:Visual Studio code
// Help:none

#include <iostream>
#include <cmath>
using namespace std;
int main()
{


    int startNumber = 10;
    do
    {
        cout << startNumber << " squared is "
    << pow((startNumber),2) << endl;
    startNumber++;
    } while (startNumber < 15);
    


    

        return 0;
}



/****************************************************************************************************
Assignment description:CONVERT TO A DO WHILE (POST_TEST) LOOP

****************************************************************************************************/
