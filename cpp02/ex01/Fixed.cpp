#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::		Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = obj;
}

Fixed::		Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (val << Fixed::_offset);
}

Fixed::		Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(val * ( 1 << Fixed::_offset));
}


Fixed::~Fixed(void)
{
	std::cout << "Destructor called!" << std::endl;
}

int 	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void 	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const 
{ 
	return ((float)this->_value / (float)(1 << Fixed::_offset));
}

int Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_offset);
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}

std::ostream& operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
