#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed(const float value);
    Fixed(const int value);


    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    Fixed& operator = (const Fixed &obj);
    
private:
    int _value;
    static const int _offset = 8;
};

std::ostream &operator << (std::ostream &out, Fixed const &value);

#endif