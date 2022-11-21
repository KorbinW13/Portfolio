//Korbin Wampler//
#include <iostream>
#include <fstream>
using namespace std;


double calculateRetail(double cost, double markup)
{   //Part 1//
    double totalCost = 0;
    totalCost = ((cost/100)*markup) + cost;
    
    return totalCost;
}

float output_file()
{    //Part 2//
    ifstream myfile;
    myfile.open ("input.txt");
    int an_input_number; float average; int sum = 0;
    int counter = 0;
    while (myfile >> an_input_number)
    {
        cout << an_input_number << endl;
        sum = sum + an_input_number;
        counter++;
    }
    cout << "Amount of numbers:" << counter << endl;
    average = sum/10.0;
    cout << "Sum:" << sum << endl;
    cout << "Average:" << average << endl;
    myfile.close();

    return average;
}

int main()
{
    //Part 1//
    double cost = 0;
    double markup = 0;
    double totalPrice = 0;

    cout << "Enter the Cost of the item: $"; 
    cin >> cost;
    cout << "Enter the Markup Percentage: ";
    cin >> markup;

    totalPrice = calculateRetail(cost, markup);
    cout << "Final Cost is: $" << totalPrice << endl;

    //Part 2//
    cout << "**Part 2**" << endl;
    float average = output_file();
    cout << "**Finished Part 2**" << endl;
    return 0;
}
