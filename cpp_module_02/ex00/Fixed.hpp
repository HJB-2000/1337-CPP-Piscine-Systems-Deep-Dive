#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
class Fixed
{
    private:
        int fixed_value;
        static const int rawbits;
    public:
        Fixed();
        Fixed( int value );
        Fixed(const Fixed& obj);
        Fixed &operator=(const Fixed& fixed_obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif