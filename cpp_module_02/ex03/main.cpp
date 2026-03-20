#include "Point.hpp"

int main()
{
    Point a = Point(0,0);
    Point b = Point(4,0);
    Point c = Point(2,4);
    
    if (bsp(a, b, c, Point(2,1)))
        std::cout << "\nStrictly Inside\n" << std::endl;
    else
        std::cout << "\nOutside\n" << std::endl;
    if (bsp(a, b, c, Point(0,0)))
        std::cout << "\nStrictly Inside\n" << std::endl;
    else
        std::cout << "\nOutside\n" << std::endl;
    if (bsp(a, b, c, Point(5,5)))
        std::cout << "\nStrictly Inside\n" << std::endl;
    else
        std::cout << "\nOutside\n" << std::endl;
    if (bsp(a, b, c, Point(1,0)))
        std::cout << "\nStrictly Inside\n" << std::endl;
    else
        std::cout << "\nOutside\n" << std::endl;
    return 0;
}