
class	PhoneBook
{
	public:

		PhoneBook( void );
		~PhoneBook( void );

		void    ft_add( void );
		void	ft_search( void );

	private:

		class	Contact
		{
			public:
				std::string	infos[5];
		};

		Contact		data[8];
		int		i;
		int		nb_data;
};
