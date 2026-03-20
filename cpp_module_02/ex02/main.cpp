
 #include <iostream>
#include "Fixed.hpp"
int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed d(10);
    Fixed e(10.10f);
    Fixed res;
    res = e + d;
    std::cout << res << std::endl;
    res = e - d;
    std::cout << res << std::endl;
    res = e * d;
    std::cout << res << std::endl;
    res = e / d;
    std::cout << res << std::endl;
    if(e > d)
        std::cout << e << " > " << d << std::endl;
    if(e < d)
        std::cout << e << " < " << d << std::endl;
    if(e != d)
        std::cout << e << " != " << d << std::endl;
    if(e == d)
        std::cout << e << " == " << d << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}