#pragma once
#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
    Fixed holder;
    public:
    Point();
    Point(float a, float b);
    Point& operator=(const Point& obj);
    Point(const Point& obj);
    Fixed getx();
    Fixed gety();
    ~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
