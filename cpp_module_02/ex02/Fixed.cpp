#include "Fixed.hpp"
#include <cmath>
const int Fixed::rawbits = 8;
Fixed::Fixed(): fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj):fixed_value(obj.fixed_value)
{
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->fixed_value = obj.fixed_value;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& outstream, const Fixed& obj)
{
    outstream << obj.toFloat();
    return outstream;
}

Fixed::Fixed(const int p){
    std::cout << "Paramitirized (int) constructor called" << std::endl;
    fixed_value = p << rawbits;
}

Fixed::Fixed(const float p){
    std::cout << "Paramitirized (float) constructor called" << std::endl;
    fixed_value = roundf((p * (1.0f * (1 << rawbits))));
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout <<  "getRawBits member function called" << std::endl;
    return fixed_value;
}

void Fixed::setRawBits(int const raw)
{
    fixed_value = raw;
    return ;
} 

float Fixed::toFloat(void) const
{
    float res = (float) this->fixed_value / (1.0f * (1 << rawbits));
    return res;
}

int Fixed::toInt(void) const
{
    int res = (int)this->fixed_value >> rawbits;
    return res;
}

bool Fixed::operator>(const Fixed& obj) const
{
    return this->fixed_value > obj.fixed_value;
}

bool Fixed::operator<(const Fixed& obj) const
{
    return this->fixed_value < obj.fixed_value;
}

bool Fixed::operator>=(const Fixed& obj) const
{
    return this->fixed_value >= obj.fixed_value;
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return this->fixed_value <= obj.fixed_value;
}

bool Fixed::operator==(const Fixed& obj) const
{
    return this->fixed_value == obj.fixed_value;
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return this->fixed_value != obj.fixed_value;
}

Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed result;
    long long addition = (long long)this->fixed_value + (long long)obj.fixed_value;
    result.fixed_value = (int)addition;
    return result;
}

Fixed Fixed::operator-(const Fixed& obj) const
{
    Fixed result;
    long long substraction = (long long)this->fixed_value - (long long)obj.fixed_value;
    result.fixed_value = (int)substraction;
    return result;
}

Fixed Fixed::operator*(const Fixed& obj) const
{
    long long product = (long long)this->fixed_value * (long long)obj.fixed_value;
    Fixed result;
    result.fixed_value = (int)(product >> rawbits);
    return result;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
    Fixed result;
    if (!obj.fixed_value)
    {
        std::cout << "undefined division" << std::endl;
        return result;
    }
    long long dividend = (long long)this->fixed_value << rawbits;
    result.fixed_value = (int)(dividend / obj.fixed_value);
    return result;
}

Fixed& Fixed::operator++()
{
    this->fixed_value += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->fixed_value += 1;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->fixed_value -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->fixed_value -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a.fixed_value < b.fixed_value) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a.fixed_value < b.fixed_value) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a.fixed_value > b.fixed_value) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a.fixed_value > b.fixed_value) ? a : b;
}
