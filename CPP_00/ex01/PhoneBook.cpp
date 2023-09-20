
#include "phonebook.hpp"

PhoneBook::PhoneBook( void )
{
	this->i = 0;
	this->nb_data = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
        std::cout << "Hope to see you again in the PhOnEbOoK !" << std::endl << "Don't forget computers are the future." << std::endl;
        return ;
}

static std::string	ft_get_input(const char *name)
{
	std::string	str;
	
	std::cout << "Enter " << name << ": ";
	usleep (ft_rand());
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "Enter " << name << ": ";
		std::getline(std::cin, str);
	}
	if (str.length() > 10)
	{
		str.resize(10);
		str.replace(9, 1, ".");
	}
	else if (str.length() < 10)
		str.resize(10, ' ');
	return (str);
}

void	PhoneBook::ft_add( void )
{
	int	i = 0;
	const char name[][15] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	std::string	res;
	
	while (i < 5)
	{
		res = ft_get_input(name[i]);
		usleep (ft_rand());
		this->data[this->i].infos[i++] = res.substr(0, 10);
		res.clear();
	}
	std::cout << "Contact added" << std::endl;
	if (this->nb_data < 8)
		this->nb_data++;
	if (this->i == 7)
		this->i = 0;
	else
		this->i++;
	return ;
}

void	PhoneBook::ft_search( void )
{
	int	i = 0;
	std::string	str;
	const char name[][15] = {"First name    ", "Last name     ", "Nickname      ", "Phone number  ", "Darkest secret"};
	
	if (!this->nb_data)
	{
		std::cout << "No contact to display" << std::endl;
		return ;
	}
	if (this->nb_data == 1)
	{
		i = 0;
		while (i < 5)
		{
		        std::cout << name[i] << ": " << this->data[0].infos[i] << std::endl;
		        usleep (ft_rand());
		        i++;
		}
		return ;
	}
	ft_print_header();
	while (i < this->nb_data)
	{
		std::cout << "|" << i << "         |" << this->data[i].infos[0] <<\
			"|" << this->data[i].infos[1] << "|" << this->data[i].infos[2]\
			<< "|" << std::endl;
		usleep (ft_rand());
		std::cout << "|__________|__________|__________|__________|" << std::endl;
		usleep (ft_rand());
		i++;
	}
	std::cout << std::endl << "Wich index do you want to print ? ";
	usleep (ft_rand());
	std::getline(std::cin, str);
	while (str.length() != 1 || ((str.at(0) - 48) >= i) || ((str.at(0) - 48) < 0))
	{

	        std::cout << "Wrong index, enter a new one: ";
		std::getline(std::cin, str);
	}
	std::cout << std::endl;
	i = 0;
	while (i < 5)
	{
	        std::cout << name[i] << ": " << this->data[str.at(0) - 48].infos[i] << std::endl;
	        usleep (ft_rand());
	        i++;
	}
	std::cout << std::endl;
}
