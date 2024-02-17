/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:01:45 by gbricot           #+#    #+#             */
/*   Updated: 2024/02/17 20:34:57 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*		CONSTRUCTORS/DESTRUCTOR		*/

template < typename T >
Array< T >::Array( void ) : _size(0)
{
	std::cout << "[Array] Default constructor called" << std::endl;
	this->array = new T[_size];
}

template < typename T >
Array< T >::Array( unsigned int input_size ) : _size(input_size)
{
	std::cout << "[Array] Number constructor called" << std::endl;
	this->array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->array[i] = 0;
}

template < typename T >
Array< T >::Array( Array &cpy ) : _size(cpy.size())
{
	std::cout << "[Array] Copy constructor called" << std::endl;
	this->array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->array[i] = cpy[i];
}

template < typename T >
Array< T >::~Array( void )
{
	std::cout << "[Array] Destructor called" << std::endl;
	if (this->array)
		delete [] this->array;
}

/*		OPERATOR OVERLOADING		*/

template < typename T >
Array< T > &Array< T >::operator=( Array &val )
{
	std::cout << "[Array] Copy assignment operator called" << std::endl;
	this->_size = val.size();
	this->array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->array[i] = val[i];
	return (*this);
}

template < typename T >
T	&Array< T >::operator[]( int index )
{
	if (index >= 0 && index < static_cast<int>(_size))
		return (array[index]);
	throw Array< T >::OutOfBoundsException();
}

template < typename T >
T	&Array< T >::operator[]( unsigned int index )
{
	if (index < _size)
		return (array[index]);
	throw Array< T >::OutOfBoundsException();
}

/*		MEMBERS FUNCTIONS		*/

template < typename T >
unsigned int	Array< T >::size( void ) const
{
	return (this->_size);
}

/*		EXCEPTION MEMBER		*/

template < typename T >
const char *Array< T >::OutOfBoundsException::what( void ) const throw()
{
	return ("Out of bounds");
}