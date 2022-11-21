#include "car_header.h"

Car::Car() 
{   
    x = 0; y = 0;
}
Car::Car(int a, int b) 
{ 
    x = a; y = b; 
}
void Car::change_variable1(int something)
{
    x = something;
}
void Car::change_variable2(int something)
{
    y = something;
}
int Car::get_variable1() const
{
    return x;
}
int Car::get_variable2() const
{
    return y;
}