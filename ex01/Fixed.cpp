/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:25:31 by antoine           #+#    #+#             */
/*   Updated: 2022/08/04 13:45:08 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_frac_bits = 8;

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
	this->_n = (n << this->_frac_bits);
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called." << std::endl;
	this->_n = (int)roundf(f * (1 << this->_frac_bits));
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
	// std::cout << "toInt member function called." << std::endl;
	return ((int)(this->_n >> this->_frac_bits));
}

float	Fixed::toFloat(void) const
{
	// std::cout << "toFloat member function called." << std::endl;
	return ((1.0f * this->_n) / (1 << this->_frac_bits));
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_n = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}
