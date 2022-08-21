/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:07:17 by antoine           #+#    #+#             */
/*   Updated: 2022/08/21 16:00:49 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Triangle.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Triangle::Triangle(void)
{
	_A = Point();
	_B = Point();
	_C = Point();
	_AB = Line(_A, _B);
	_BC = Line(_B, _C);
	_CA = Line(_C, _A);
	return ;
}

Triangle::Triangle(Triangle const &other)
{
	*this = other;
	return ;
}

Triangle::Triangle(Point const &A, Point const &B, Point const &C):
_A(A), _B(B), _C(C)
{
	_AB = Line(_A, _B);
	_BC = Line(_B, _C);
	_CA = Line(_C, _A);
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Triangle::~Triangle(void)
{
	return ;
}

/*==============================================================================
	Assignment operator.
==============================================================================*/

Triangle	&Triangle::operator=(Triangle const &other)
{
	this->set_A(other.get_A());
	this->set_B(other.get_B());
	this->set_C(other.get_C());
	this->set_AB(other.get_AB());
	this->set_BC(other.get_BC());
	this->set_CA(other.get_CA());
	return (*this);
}

/*==============================================================================
	Getters.
==============================================================================*/

Point const	&Triangle::get_A(void) const
{
	return (this->_A);
}

Point const	&Triangle::get_B(void) const
{
	return (this->_B);
}

Point const	&Triangle::get_C(void) const
{
	return (this->_C);
}

Line const	&Triangle::get_AB(void) const
{
	return (this->_AB);
}

Line const	&Triangle::get_BC(void) const
{
	return (this->_BC);
}

Line const	&Triangle::get_CA(void) const
{
	return (this->_CA);
}

/*==============================================================================
	Setters.
==============================================================================*/

void	Triangle::set_A(Point const &A)
{
	this->_A = A;
	return ;
}

void	Triangle::set_B(Point const &B)
{
	this->_B = B;
	return ;
}

void	Triangle::set_C(Point const &C)
{
	this->_C = C;
	return ;
}

void	Triangle::set_AB(Line const &AB)
{
	this->_AB = AB;
	return ;
}

void	Triangle::set_BC(Line const &BC)
{
	this->_BC = BC;
	return ;
}

void	Triangle::set_CA(Line const &CA)
{
	this->_CA = CA;
	return ;
}

/*==============================================================================
	BSP.
==============================================================================*/

bool	Triangle::is_inside(Point const P) const
{
	bool	t1, t2;

	t1 = (this->_AB.p_dist(P) >= 0) && (this->_BC.p_dist(P) >= 0)\
		&& (this->_CA.p_dist(P) >= 0);
	t2 = (this->_AB.p_dist(P) <= 0) && (this->_BC.p_dist(P) <= 0)\
		&& (this->_CA.p_dist(P) <= 0);
	return (t1 || t2);
}
