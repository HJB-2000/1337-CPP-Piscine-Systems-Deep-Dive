#include "Point.hpp"
#include "Fixed.hpp"

void scular_product(Fixed& segment, Point l, Point k, Point p)
{
    Fixed res1 = ((k.getx() - l.getx()) * (p.gety() - l.gety()));
    Fixed res2 = ((k.gety() - l.gety()) * (p.getx() - l.getx()));
    Fixed res3 = res1 - res2;
    segment = res3;
    return ; 
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed D_AB;
    Fixed D_BC;
    Fixed D_CA;
    Fixed z;
    scular_product(D_AB, a, b, point);
    scular_product(D_BC, b, c, point);
    scular_product(D_CA, c, a, point);
    if (D_AB == z || D_BC == z || D_CA == z)
        return false;
    if (D_AB > z && D_BC > z && D_CA > z)
        return true;
    if (D_AB < z && D_BC < z && D_CA < z)
        return true;
    return false;
}