
#include "phonebook.hpp"

int	ft_rand(void)
{
	unsigned int	i = rand();

	i <<= 15;
	return (i >>= 14);
}

void	ft_print_header(void)
{
	std::cout << "_____________________________________________" << std::endl;
	usleep (ft_rand());
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	usleep (ft_rand());
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	usleep (ft_rand());

}

static void	ft_print_wellcome(void)
{

	std::cout << "||  WeLlCoMe In PhOnEbOoK ||" << std::endl;
	usleep (ft_rand());
	std::cout << "Today we are the: 12/06/1981" << std::endl;
	usleep (ft_rand());
	std::cout << "Have fun with this PoNeBoOk ^^" << std::endl << std::endl;
	usleep (ft_rand());
	std::cout << "What do you want to do today ?\nAre you lost ? type: '--HELP'." << std::endl << std::endl;
	usleep (ft_rand());
}

static void	ft_print_help(void)
{

	std::cout << "Do you want to add a new contact ? type: 'ADD'." << std::endl;
	usleep (ft_rand());
	std::cout << "Do you want to search an existing contact ? type: 'SEARCH'." << std::endl;
	usleep (ft_rand());
	std::cout << "Do you want to exit the program ? type: 'EXIT'." << std::endl;
        usleep (ft_rand());
	std::cout << "For more informations you can check the manual in the floppy disk case." << std::endl;
        usleep (ft_rand());
}

int	main(void)
{
	PhoneBook	data;
	std::string	str;

	ft_print_wellcome();
	while (1)
	{
		std::getline(std::cin, str);
		if (!std::strcmp(str.c_str(), "EXIT"))
			return (0);
		else if (!std::strcmp(str.c_str(), "--HELP"))
			ft_print_help();
		else if (!std::strcmp(str.c_str(), "ADD"))
			data.ft_add();
		else if (!std::strcmp(str.c_str(), "SEARCH"))
			data.ft_search();
	}
}
