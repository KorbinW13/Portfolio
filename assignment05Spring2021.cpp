// Korbin Wampler
// Dr. Bekkering
// Fall 2021
// assignment05Spring2021
// Description:
// Status:Complete
// Compiler used:Visual Studio Code 
// Help: none
/*
Write a program that creates the  file random.txt with
random numbers between a minimum and a maximum. The user can specify the count,
the minimum, and the maximum. Output the list of random numbers to the screen too.
Then, the program opens the file, checks each number to see if it is odd or even.
The odd numbers are written to a file odd.txt, the even numbers are written to a file even.txt.
Finally, the program reads the odd and even files and prints the contents to the screen.
On screen, the numbers are shown in a table with 5 columns of 10 characters wide.

Grading
10% generating true random numbers
10% min and max numbers are inclusive - they can occur in the list
10% proper commenting
10% user gets a message when files have been written
10% using proper data types
10% user can input the count, minimum, and maximum. File names can be hard coded
10% table correctly formatted
10% using all steps in working with files
10% no missing spaces in the output, and "press any key to continue" or a similar line is on its own line
10% program compiles and gives correct output

sample output:
How many numbers would you like to generate (10-100)? 5
Please only input a number from 10 to 100. Please try again.  555
Please only input a number from 10 to 100. Please try again.  55
What is the minimum random number (100 to 999)? 22
Please input only a number from 100 to 999. Please try again.  2222
Please input only a number from 100 to 999. Please try again.  222
What is the maximum random number (100 to 999, greater than minimum)? 111
Your maximum value must be equal to or higher than
your minimum value (222). Please try again. 33
Please input a number from 100 to 999. Please try again. 3333
Please input a number from 100 to 999. Please try again. 333

File random.txt written.
Now we are going to separate odd and even numbers
to their own files.

Both the odd.txt and even.txt files have been written.

Contents of the even.txt file:
       296       268       320       322       300
       324       300       304       298       230
       222       226       246       256       264
       310       286       314       326       292
       252       242       304       230       332
       290       308       282       228       262
       222
Contents of the odd.txt file:
       279       267       299       269       289
       297       239       309       323       253
       267       331       299       289       307
       295       317       251       297       225
       253       235       263       239
Press any key to continue . . .*/


#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;
 
int main()
{
   //Variables
   int maxNumber; //Max Number like 999
   int minNumber; //Min Number like 10 or 100
   int count;     //How many numbers are displayed in random
   int randomNumber; //the Random Number generated by our range
   int number;      //represents the number on the line of the text file
   int rowEvens; //rows in the Evens file
   int rowOdds;  //rows in the Odds file
   
   //assign variables values
   rowEvens = 0;
   rowOdds = 0;

   //file reading and writing
   ofstream outputRandom;
   ofstream outputEvens;
   ofstream outputOdds;
   ifstream inputTextFile;

   
   //random number generator seed
   unsigned seed = time(0);
   srand(seed);

   //User input section
    cout << "How many numbers would you like to generate (10-100)? ";
    cin >> count;
    while (count < 10 || count > 100 )
    {
      cout << "Please only input a number from 10 to 100. Please try again.  ";
       cin >> count;
    }

    cout << "What is the minimum random number (100 to 999)? ";
    cin >> minNumber;
    while (minNumber < 100 || minNumber > 999 )
    {
      cout << "Please only input a number from 100 to 999. Please try again.  ";
       cin >> minNumber;
    }

    cout << "What is the maximum random number (100 to 999, greater than minimum)? ";
    cin >> maxNumber;
    while (maxNumber < minNumber)
    {
         cout << "Your maximum value must be equal to or higher than " << endl
              << "your minimum value (" << minNumber << "). Please try again.  ";
         cin >> maxNumber;
      
            while (maxNumber < 100 || maxNumber > 999)
            {
               cout << "Please input a number from 100 to 999. Please try again. ";
               cin >> maxNumber;
            }
    }
      
   //random number generator with the range in it
   outputRandom.open ("random.txt");
   for (int output = 1; output < count; ++output)
   {
      randomNumber =(rand() % (maxNumber - minNumber + 1)) + minNumber;
      outputRandom << randomNumber << endl;
   }
   outputRandom.close();
   //The end of the Random Numbers being generated and printed 
      cout << endl
           << "File random.txt written." << endl
           << "Now we are going to separate odd and even numbers to their own files." << endl;

   //Evens and Odds Files being written.
   inputTextFile.open("random.txt");
   outputEvens.open("even.txt");
   outputOdds.open("odd.txt");
   

   while (inputTextFile >> number)
   {
      if (number % 2 == 0)                   //to get the even numbers from the random ones
      {
         outputEvens << setw(10) << number;
         rowEvens += 1;
         if (rowEvens == 5)
         {
            outputEvens << endl;
            rowEvens = 0;
         }
      }
      else                                   //this gives us the odd numbers
      {
         outputOdds << setw(10) << number;
         rowOdds += 1;
         if (rowOdds == 5)
         {
            outputOdds << endl;
            rowOdds = 0;
         }
      }
   }
   //as we are done with written them to the files we close them to prevent a crash
   inputTextFile.close();
   outputEvens.close();
   outputOdds.close();

   cout << endl << "Both the odd.txt and even.txt files have been written." << endl;
   //this part is for writing the even.txt and odd.txt to the console or terminal

   inputTextFile.open("even.txt");

   //we reset the rows values otherwise it would not fucntion properly in making the table
   rowEvens = 0;
   rowOdds = 0;

   cout << endl << "Contents of the even.txt file:" << endl;
   while (inputTextFile >> number)
   {
      cout << setw(10) << number;
      rowEvens += 1;
      if (rowEvens == 5)
      {
         cout << endl;
         rowEvens = 0;
      }
   }
   
   inputTextFile.close();

   inputTextFile.open("odd.txt");
   cout << endl << "Contents of the odd.txt file:" << endl;
   while (inputTextFile >> number)
   {
      cout << setw(10) << number;
      rowOdds += 1;
      if (rowOdds == 5)
      {
         cout << endl;
         rowOdds = 0;
      }
   }
   cout << endl;

   inputTextFile.close();
   
   return 0;
}
