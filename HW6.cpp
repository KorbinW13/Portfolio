//Korbin Wampler - Assignement 6 CS2
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct MyStructure
{
    string Name; int Value1; float Value2;
};

int main()
{
    ifstream myfile; myfile.open("input_assignment_6.txt");
    MyStructure struct_array[5];
    for (int i = 0; i < 5; i++)
    {
        myfile >> struct_array[i].Name;
		myfile >> struct_array[i].Value1;
		myfile >> struct_array[i].Value2;

        /*cout << struct_array[i].Name << " ";
        cout << struct_array[i].Value1 << " ";
        cout << struct_array[i].Value2 << " " << endl;*/
    }
    myfile.close();
    //Second For Loop - Probably not needed
    for (int x = 0; x < 5; x++)
    {
        cout << struct_array[x].Name << " ";
        cout << struct_array[x].Value1 << " ";
        cout << struct_array[x].Value2 << " " << endl;
    }
}