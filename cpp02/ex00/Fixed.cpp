#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::		Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called!" << std::endl;
	this->_value = obj.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called!" << std::endl;
}

int 	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void 	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}


const int Fixed::_offset = 8;