#ifndef CONVERTION_HPP
# define CONVERTION_HPP

# include <exception>
# include <iostream>
# include <string>
# include <cmath>

class Convert
{
private:
	std::string input;
public:
	Convert( const char *Input );
	Convert( Convert const &other );
	~Convert();

	Convert const &operator = ( Convert const &other );

	char	getChar( void ) const;
	int		getInt( void ) const;
	float	getFloat( void ) const;
	double	getDouble( void ) const;

	class NonDisplayableException: public std::exception
	{
		virtual const char *what() const throw();
	};
	
	class ImpossibleException: public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream	&operator << ( std::ostream &out, Convert const &conv );

#endif