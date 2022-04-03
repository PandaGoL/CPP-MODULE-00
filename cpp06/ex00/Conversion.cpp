#include "Conversion.hpp"

Convert::Convert( const char *Input ) : input(Input)
{

}

Convert::Convert( Convert const &other ): input(other.input) {}

Convert const &Convert::operator=( Convert const &other )
{
	this->input = other.input;
	return (*this);
}

Convert::~Convert()
{

}

char	Convert::getChar() const
{
	char ret;

	try
	{
		ret = static_cast<char>(std::stoi(this->input));
	}
	catch(const std::exception& e)
	{
		throw Convert::ImpossibleException();
	}

	if (ret < 32 || ret > 126)
		throw Convert::NonDisplayableException();

	return (ret);
}

int		Convert::getInt() const
{
	int ret = 0;

	try
	{
		ret =std::stoi(this->input);
	}
	catch(const std::exception& e)
	{
		throw Convert::ImpossibleException();
	}

	return (ret);
}

float	Convert::getFloat() const
{
	float ret = 0;

	try
	{
		ret = std::stof(this->input);
	}
	catch(const std::exception& e)
	{
		throw Convert::ImpossibleException();
	}
	
	return (ret);
}

double	Convert::getDouble() const
{
	double ret = 0;

	try
	{
		ret = static_cast<double>(std::stof(this->input));
	}
	catch(const std::exception& e)
	{
		throw Convert::ImpossibleException();
	}

	return (ret);
}

const char	*Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char	*Convert::ImpossibleException::what() const throw()
{
	return ("Impossible");
}

std::ostream	&operator<<( std::ostream &out, Convert const &conv )
{
	try
	{
		char c = conv.getChar();
		out << "char: '" << c << "' " << std::endl;
	}
	catch(const std::exception& e)
	{
		out << "char: " <<e.what() << std::endl;
	}

	try
	{
		out << "int: " << conv.getInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		out << e.what() << std::endl;
	}
	
	try
	{
		out << "float: " << conv.getFloat();
		if (conv.getFloat() - static_cast<int>(conv.getFloat()) == 0)
			out << ".0";
		out << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		out << e.what() << std::endl;
	}

	try
	{
		out << "double: " << conv.getDouble();
		if (conv.getDouble() - static_cast<int>(conv.getDouble()) == 0)
			out << ".0";
		out << std::endl;
	}
	catch(const std::exception& e)
	{
		out << e.what() << std::endl;
	}
	return (out);
}