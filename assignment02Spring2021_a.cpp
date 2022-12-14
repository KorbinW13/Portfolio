// Korbin Wampler
// Dr. Bekkering
// spring 2021
// assignment02Spring2021_a
// Description: Calculates the average of 5 specific numbers by finding their sum then dividing by the amount of specific numbers in this case 5 to get 30.8.
// Status: completed
// Compiler used: Visual Studio Code
// Help: None


#include <iostream>
using namespace std;

int main()
{
    //define Variables
    double value1;
    double value2;
    double value3;
    double value4;
    double value5;
    double sum;
    double average;

    //declare Variables 
    value1 = 28;
    value2 = 32;
    value3 = 37;
    value4 = 24;
    value5 = 33;
    
    //Calculate Sum
    sum = (value1 + value2 + value3 + value4 + value5);

    //Calculate Average
    average = sum/5;

    //Output
    cout << "Average of 28, 32, 37, 24, and 33 is " << average;

    return 0;
}

/****************************************************************************************************
Average of Values
To get the average of a series of values, you add the values up and then divide the sum by the number of values. 
Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. 
The program should first calculate the sum of these five variables and store the result in a separate variable named sum. 
Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen. 
TIP:Use the double data type for all variables in this program.

Sample output:
Average of 28, 32, 37, 24, and 33 is 30.8

Grading:
using seven double variables    (  50%):
getting user output to show    (  30%):
complete header information    (  20%):
    (   pts):
    (   pts):
    (   pts):

****************************************************************************************************/
