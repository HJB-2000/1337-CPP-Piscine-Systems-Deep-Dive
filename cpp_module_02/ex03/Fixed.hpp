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
        const static int rawbits;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed(const int p);
        Fixed(const float p);
        Fixed   &operator=(const Fixed& obj);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat(void) const;
        int     toInt(void) const;
        bool    operator>(const Fixed& obj) const;
        bool    operator<(const Fixed& obj) const;
        bool    operator>=(const Fixed& obj) const;
        bool    operator<=(const Fixed& obj) const;
        bool    operator==(const Fixed& obj) const;
        bool    operator!=(const Fixed& obj) const;
        Fixed   operator+(const Fixed& obj) const;
        Fixed   operator-(const Fixed& obj) const;
        Fixed   operator*(const Fixed& obj) const;
        Fixed   operator/(const Fixed& obj) const;
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);
        static  Fixed& min(Fixed& a, Fixed& b);
        static  const Fixed& min(const Fixed& a, const Fixed& b);
        static  Fixed& max(Fixed& a, Fixed& b);
        static  const Fixed& max(const Fixed& a, const Fixed& b);
        ~Fixed();
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif