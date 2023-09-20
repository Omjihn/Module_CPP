# include "Contact.hpp"

class	PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void    ft_add(void);
		void	ft_search(void);

	private:

		Contact		data[8];
		int		i;
		int		nb_data;
};
