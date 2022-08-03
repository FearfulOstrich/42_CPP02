/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:25:31 by antoine           #+#    #+#             */
/*   Updated: 2022/08/03 09:38:09 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
	return ;
}

Fixed::Fixed(int const n)
{
	std::cout << "Integer constructor called." << std::endl;
	this->_n = n << 8;
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called." << std::endl;
	(void)f;
	this->_n = 0;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return this->_n;
}

void	Fixed::setRawBits(const int n)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_n = n;
	return ;
}

int	Fixed::toInt(void) const
{
	std::cout << "toInt member function called." << std::endl;
	return (this->_n >> 8);
}

float	Fixed::toFloat(void) const
{
	std::cout << "toFloat member function called." << std::endl;
	return (0.0f);
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_n = other.getRawBits();
	return *this;
}

int const	Fixed::_sep_pos = 8;

std::ostream	&operator<<(std::ostream &o, Fixed &fixed)
{
	o << fixed.toFloat();
	return o;
}
