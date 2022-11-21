#include <iostream>
using namespace std;


int main()
{
int x = 100;
int *ptr = &x;      
cout << x << endl << *ptr << endl;    
*ptr = 7;
   
   cout << x << " \n" << *ptr << endl;  
} 
