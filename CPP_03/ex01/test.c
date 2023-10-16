
#include <iostream>

class	test
{
	private:
		int	a;

	public:
		test();
		~test();
		int ft_get_a() { a = 0; return (a);}
};

test::test()
{
        a = 42;
}

test::~test()
{
        std::cout << "Destruc" << std::endl;
}

class	test2 : public test
{
	public:

		void	ft_print_a( void ){std::cout << "a = " << this->a << std::endl;}

};

int	main(void)
{
	test2	test;

	std::cout << test.ft_get_a() << std::endl;
	return (0);
}
