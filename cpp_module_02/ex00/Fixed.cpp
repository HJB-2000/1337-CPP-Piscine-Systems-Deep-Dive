#include "Fixed.hpp"

const int Fixed::rawbits = 8;

Fixed::Fixed(): fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value): fixed_value(value)
{
    std::cout << "Paramitirized constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj):fixed_value(obj.fixed_value)
{
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& fixed_obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed_obj)
    {
        this->fixed_value = fixed_obj.fixed_value;
    }
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout <<  "getRawBits member function called" << std::endl;
    return this->fixed_value;    
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_value = raw;
    return ;
} 

