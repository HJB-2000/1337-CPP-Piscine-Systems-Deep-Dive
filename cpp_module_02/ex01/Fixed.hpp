#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <string>
class Fixed
{
    private:
        int fixed_value;
        static const int rawbits;
    public:
        Fixed();
        Fixed(const int p);
        Fixed(const float p);
        Fixed(const Fixed& obj);
        Fixed &operator=(const Fixed& obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif