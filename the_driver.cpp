#include <iostream>
#include "car_header.h"
using namespace std;

Car::Car() 
{   
    x = 0; y = 0;
}
Car::Car(int a, int b) 
{ 
    x = a; y = b; 
}
void Car::change_variable1(int huh)
{
    x = huh;
}
void Car::change_variable2(int huh)
{
    y = huh;
}
int Car::get_variable1() const
{
    return x;
}
int Car::get_variable2() const
{
    return y;
}
//used for testing as VS Code was not working with them as seperate files

int main()
{
    //Using Object class
    Car car1;
    Car car2(2,3);
    cout << "variable x in car1 is: " << car1.get_variable1() << endl;
    cout << "variable y in car1 is: " << car1.get_variable2() << endl;
    car1.change_variable1(100);
    cout << "variable x has been changed to: " << car1.get_variable1() << " in car1" << endl;
    car1.change_variable2(50);
    cout << "variable y has been changed to: " << car1.get_variable2() << " in car1" << endl;

    cout << "variable x in car2 is: " << car2.get_variable1() << endl;
    cout << "variable y in car2 is: " << car2.get_variable2() << endl;
    car2.change_variable1(10);
    cout << "variable x has been changed to: " << car2.get_variable1() << " in car2" << endl;
    car2.change_variable2(150);
    cout << "variable y has been changed to: " << car2.get_variable2() << " in car2" << endl;

    //Using Pointers with new
    Car* the_car = new Car();
    Car* the_car_Value = new Car(8, 7);

    cout << "the_car:" << " ";
    cout << the_car->get_variable1() << " "
        << the_car->get_variable2() << endl;

    cout << "the_car_Value:" << " ";    
    cout << the_car_Value->get_variable1() << " "
        << the_car_Value->get_variable2() << endl; 

    cout << "the_car changed:" << " ";
    the_car->change_variable1(10);
    the_car->change_variable2(12);
    cout << the_car->get_variable1() << " "
        << the_car->get_variable2() << endl;

    cout << "the_car_Value changed:" << " ";
    the_car_Value->change_variable1(100);
    the_car_Value->change_variable2(120);
    cout << the_car_Value->get_variable1() << " "
        << the_car_Value->get_variable2() << endl;

    delete the_car_Value; delete the_car;
}