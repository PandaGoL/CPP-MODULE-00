#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
            Brain *brain;
    public:
            Cat();
            Cat(const std::string &type);
            Cat(const Cat &cat);
            ~Cat();
            Cat const & operator = (const Cat &cat);
            virtual void makeSound(void) const;
            Brain	*getBrain( void ) const;
};

#endif
