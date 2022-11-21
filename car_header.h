#pragma once
//#ifndef car_header_h
//#define car_header_h
class Car {
    private:
        int x; int y;
    public:
        Car();
        Car(int a, int b);
        void change_variable1(int something);
        void change_variable2(int something);
        int get_variable1() const;
        int get_variable2() const;
};
//#endif