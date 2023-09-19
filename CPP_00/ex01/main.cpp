
#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	data;
	char	str[1024];

	while (1)
	{
		std::cin >> str;
		if (!strcmp(str, "EXIT"))
			return (0);
		else if (!strcmp(str, "ADD"))
		PhoneBook::ft_test(data);
//		else if (!strcmp(str, "SEARCH"))
//			ft_search(data);
	}
}
