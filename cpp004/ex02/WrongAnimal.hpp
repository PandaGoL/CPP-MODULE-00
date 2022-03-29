#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal( void );
		WrongAnimal( WrongAnimal const &other );

		WrongAnimal	const &operator=( WrongAnimal const &other );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif
