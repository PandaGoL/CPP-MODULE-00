#include <iostream>
#include <string>


int main(void)
{
    
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string: " << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "via string address: " << &str << std::endl;
	std::cout << "via stringPTR: " << stringPTR << std::endl;
	std::cout << "via stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;

	std::cout << "Value of the string: " << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "via string itself: " << str << std::endl;
	std::cout << "via stringPTR: " << *stringPTR << std::endl;
	std::cout << "via stringREF: " << stringREF << std::endl;
	
	std::cout << std::endl;
	return (0);
}