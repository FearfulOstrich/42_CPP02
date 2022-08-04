/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:40:47 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/04 17:49:19 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Point::Point(void): _x(0), _y(0)
{
	return ;
}

Point::Point(Point const &other)
{
	*this = other;
	return ;
}

Point::Point(Fixed const &x, Fixed const &y): _x(x), _y(y)
{
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Point::~Point(void)
{
	return ;
}

/*==============================================================================
	Assignment operator.
==============================================================================*/

Point	&Point::operator=(Point const &other)
{
	this->set_x(other.get_x());
	this->set_y(other.get_y());
	return (*this);
}

/*==============================================================================
	Getters.
==============================================================================*/

Fixed const	&Point::get_x(void) const
{
	return (this->_x);
}

Fixed const	&Point::get_y(void) const
{
	return (this->_y);
}

/*==============================================================================
	Setters.
==============================================================================*/

void	set_x(Fixed const &x)
{
	this->_x = x;
	return ;
}

void	set_y(Fixed const &y)
{
	this->_y = y;
	return ;
}