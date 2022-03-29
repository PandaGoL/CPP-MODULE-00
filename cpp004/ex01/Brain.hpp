#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
            std::string ideas[100];
            static int nbRand;
    public:
            Brain();
            ~Brain();
            Brain(Brain const & other);

            Brain const & operator = (Brain const & other);

            std::string createIdea();
            void printIdeas();
};

#endif