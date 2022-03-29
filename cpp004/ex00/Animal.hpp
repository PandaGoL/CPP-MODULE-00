#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
            std::string _type;
    
    public:
            Animal();
            Animal(const std::string &type);
            Animal(const Animal & animal);
            virtual ~Animal();
            Animal & operator = (const Animal & animal);
            std::string getType(void) const;
            virtual void makeSound(void) const;
};

#endif