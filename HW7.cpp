//Korbin Wampler
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void fileWrite(fstream &outfile, int i)
{
    for (i = 0; i < 10; i++)
    {
        outfile << i+1 << " ";
    }
    cout << "success" << endl;
}

int main()
{
    fstream outfile; outfile.open("output.txt");
    int i;
    cout << "Writing to file output.txt" << endl;
    fileWrite(outfile, i);
    outfile.close();

    outfile.open("output.txt");
    int value;
    while (outfile >> value)
    {
        cout << value << " ";
    }
    outfile.close();
}