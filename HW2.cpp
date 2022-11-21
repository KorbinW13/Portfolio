#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile("hw.txt");
    for(int i = 0; i < 10; i++)
    {
        cout << i*i << ", ";
        myfile << i*i << " "; //different to look better on #8
    }
    myfile.close(); 
}

