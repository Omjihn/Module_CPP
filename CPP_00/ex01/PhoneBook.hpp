
class	PhoneBook
{
	public:

		PhoneBook( void );
		~PhoneBook( void );
		ft_test(PhoneBook);

	private:
		class Contact
		{
			public:
				char	*fisrt_name;
				char	*last_name;
				char	*nickname;
				char	*phone_number;
				char	*darkest_secret;
		};

	private:
		Contact	data[8];
};
