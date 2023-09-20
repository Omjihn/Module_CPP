
#include "phonebook.hpp"

void	ft_print_infos(std::string *infos, int i)
{
	std::string		temp[3];
	int		j = 0;

	while (j < 3)
	{
		temp[j].assign(infos[j]);
		if (temp[j].length() < 10)
			temp[j].resize(10, ' ');
		else if (temp[j].length() > 10)
		{
			temp[j].resize(10);
			temp[j].replace(9, 1, ".");
		}
		j++;
	}
	std::cout << "|" << i << "         |" << temp[0] <<\
			"|" << temp[1] << "|" << temp[2] << "|" << std::endl;
	usleep (ft_rand());
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	usleep (ft_rand());
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

void	ft_print_wellcome(void)
{

	std::cout << "||  WeLlCoMe In PhOnEbOoK ||" << std::endl;
	usleep (ft_rand());
        std::time_t currentTime = std::time(NULL);
        std::tm *timeInfo = std::localtime(&currentTime);
        std::cout << "Current date: " << timeInfo->tm_mday << "/" << timeInfo->tm_mon + 1 << "/1981" << std::endl;
	usleep (ft_rand());
	std::cout << "Have fun with this PoNeBoOk ^^" << std::endl << std::endl;
	usleep (ft_rand());
	std::cout << "What do you want to do today ?\nAre you lost ? type: '--HELP'." << std::endl << std::endl;
	usleep (ft_rand());
}

void	ft_print_help(void)
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