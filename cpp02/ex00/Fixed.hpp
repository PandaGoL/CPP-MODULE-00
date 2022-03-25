#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
    Fixed();

    Fixed(const Fixed &obj);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed& operator = (const Fixed &obj);
    
private:
    int _value;
    static const int _offset;
};

#endif