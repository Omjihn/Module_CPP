
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstring>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctime>
# include <string>
# include <algorithm>

# include "PhoneBook.hpp"

/*       PRINT       */

void	ft_print_help(void);
void	ft_print_header(void);
void	ft_print_wellcome(void);
void	ft_print_infos(std::string *infos, int i);

/*       MISCELLANEOUS    */

int     	ft_rand(void);

#endif
