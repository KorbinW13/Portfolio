
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
int x = 7; int *ptr = &x;      cout << *ptr << endl;    
*ptr = 8;    cout << x << "\n" << *ptr << endl;
}

