// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment04Spring2021_f
// Description:a loop that i made into a for loop that also squares a starting number of 10 to 15. 
// Status:Complete
// Compiler used:Visual Stuido Code
// Help:none

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int startNumber, counter;

    startNumber =10;

    for (int counter = 1; counter <= 5; counter ++)
    {
        cout << (startNumber + counter) << " squared is "
                << pow((startNumber + counter),2) << endl;
    
    }
    


        return 0;
}


/****************************************************************************************************
Assignment description: convert to a for next loop

****************************************************************************************************/
