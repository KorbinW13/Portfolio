// Korbin Wampler
// Dr. Bekkering
// Spring 2021
// assignment06Spring2021
// Description: A program made up of multiple functions that ask for 3 integers and doubles checks them and then find the their sums and products. also a function to show the instructions.
// Status: completed
// Compiler used: Visual Studio Code
// Help: Bekkering during office hours

/* YOU HAVE A RUNNING PROGRAM BUT IT NEEDS TO BE IMPROVED. create the following functions:
10% GetInteger - returns an integer  DONE
10%  GetDouble - returns a double
10%  CheckInteger (called from GetInteger) - checks the range of an integer
10%  CheckDouble(called from GetDouble) - checks the range of a double
20%  CalculateSum  - overloaded for integers and doubles as parameters DONE
20%  CalculateProduct - overloaded for integers and doubles as parameters DONE
10%  ShowSums - shows the sums of integers and the sum of doubles
10%  ShowProducts - shows the products of integers and the product of doubles
10%  bonus: if you can create a function ShowInstructions that passes the type (integer or double) as a string. ShowInstructionsIntegers and ShowInstructionsDoubles
*/
/* sample output:
Enter three integers between 1 and 10.
If you give numbers outside that range,
you will be asked again
until you give a valid number.
Number : 66
Please enter a number between 1 and 10
Number : -8
Please enter a number between 1 and 10
Number : 6
Number : 5
Number : 4
Enter three doubles between 1 and 10.
If you give numbers outside that range,
you will be asked again
until you give a valid number.
Double : 33.3
Please enter a number between 1 and 10
Number : 3.3
Double : 4.4
Double : 5.5
The sum of the integers is 15
The sum of the doubles is 13.2
The product of the integers is 120
The product of the doubles is 79.86
Press any key to continue . . .
*/

#include <iostream>
#include <string>
using namespace std;

int int1, int2, int3, intSum, intProduct;
double double1, double2, double3, doubleSum, doubleProduct;

string doubles = "doubles";
string integers = "integers";

//Insturction Functions
void ShowInstructionsIntegers(string)
{
   cout << "Enter three " << integers << " between 1 and 10.";
   cout << "\nIf you give numbers outside that range, ";
   cout << "\nyou will be asked again ";
   cout << "\nuntil you give a valid number." << endl;
}

void ShowInstructionsDoubles(string)
{
   cout << "Enter three " << doubles <<" between 1 and 10.";
   cout << "\nIf you give doubles outside that range, ";
   cout << "\nyou will be asked again ";
   cout << "\nuntil you give a valid number." << endl;
}

//Get and Check Functions
int CheckInteger(int int1)
{
    while (int1 <1 || int1 > 10)
    {
       cout << "Please enter a number between 1 and 10" << endl;
       cout << "Number : ";
       cin >> int1;
   }
   return int1;
}

double CheckDouble(double double1)
{
    while (double1 <1 || double1 > 10)
    {
       cout << "Please enter a double between 1 and 10" << endl;
       cout << "Double : ";
       cin >> double1;
    }
   return double1;
}

int GetInteger ()
{
   cout << "Number : ";
   cin >> int1;
   int1 = CheckInteger(int1);
   return int1;
}

double GetDouble()
{
   cout << "Number : ";
   cin >> double1;
   double1 = CheckDouble(double1);
   return double1;
}

// Integers Calculations
int CalculateSum(int int1, int int2, int int3)
{
 int Sum;
 Sum = int1 + int2 + int3;
 return Sum;
}

int CalculateProduct(int int1, int int2, int int3)
{
   int Product;
   Product = int1 * int2 * int3;
   return Product;
}

// Doubles Calculations
double CalculateSum(double double1, double double2, double double3)
{
   double Sum;
   Sum = double1 + double2 + double3;
   return Sum;
}

double CalculateProduct(double double1, double double2, double double3)
{
   double Product;
   Product = double1 * double2 * double3;
   return Product;
}

//Display Data
void ShowSums(int intSum, double doubleSum)
{
    cout << "The sum of the integers is " << intSum << endl;
    cout << "The sum of the doubles is " << doubleSum << endl;
}

void ShowProducts(int intProduct, double doubleProduct)
{
    cout << "The product of the integers is " << intProduct << endl;
    cout << "The product of the doubles is " << doubleProduct << endl;
}

int main()
{
    // Get three integers.
    ShowInstructionsIntegers(integers);

    int1 = GetInteger();
    int2 = GetInteger();
    int3 = GetInteger();

    // Get three doubles.
    ShowInstructionsDoubles(doubles);

    double1 = GetDouble();
    double2 = GetDouble();
    double3 = GetDouble();

    // calculate the sum and product of integers
    intSum = CalculateSum(int1 , int2 , int3);
    intProduct = CalculateProduct(int1, int2, int3);

    // calculate the sum and product of doubles
    doubleSum = CalculateSum(double1, double2, double3);
    doubleProduct = CalculateProduct(double1, double2, double3);

    //display to the user
    ShowSums(intSum, doubleSum);
    ShowProducts(intProduct, doubleProduct);

    return 0;
}