#include "Point.hpp"

Point::Point(){};
Point::~Point(){};
Point::Point(float a, float b):x(Fixed(a)), y(Fixed(b)){}
Point::Point(const Point& obj):x(obj.x), y(obj.y){}

Point& Point::operator=(const Point& obj)
{
    if (this != &obj)
    {
         std::cout << "this operation can't be done ???" << std::endl;
    }
    return *this;
} 


Fixed Point::getx(){return x;}
Fixed Point::gety(){return y;}