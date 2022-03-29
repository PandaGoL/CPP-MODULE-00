#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat( void );
		WrongCat( WrongCat const &other );

		WrongCat	const &operator=( WrongCat const &other );

		void	makeSound( void ) const;
};

#endif