#include "Harl.hpp"

int	main(int argc, char **argv)
{
    Harl karen;

	if (argc != 2)
	{
        std::cout << "Program arguments error" << std::endl;
		return (-1);
	}
    karen.complain(argv[1]);
	return (0);
}