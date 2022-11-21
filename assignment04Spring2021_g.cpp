// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment04Spring2021_g
// Description:a while loop that checks for a number between 1 and 10 then outputs Bekkering if between 1 and 10.
// Status:Complete
// Compiler used:Visual Studio Code 
// Help: none

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter a number between 1 and 10: ";
        cin >> number;
while (number < 1 || number > 10)
{
    cout << "enter a number between 1 and 10";
cin >> number;
}    cout << "Bekkering" <<endl;


    return 0;
}


/****************************************************************************************************
Assignment description: change the condition by removing the ! and make sure you still get the same output

****************************************************************************************************/
