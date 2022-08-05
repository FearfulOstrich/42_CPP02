/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:37:54 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/05 18:56:41 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TRIANGLE_HPP_
# define _TRIANGLE_HPP_

# include "Point.hpp"
# include "Line.hpp"

class	Trianle
{
	public:
		// Constructors.
		Triangle(void);
		Triangle(Triangle const &other);
		Triangle(Point const &A, Point const &B, Point const &C);

		// Destructor.
		~Triangle(void);

		// Assignement operator.
		Triangle	&operator=(Triangle const &other);

		// Getters
		Point const &get_A(void) const;
		Point const &get_B(void) const;
		Point const &get_C(void) const;

		// Setters
		void	set_A(Point const &A);
		void	set_B(Point const &B);
		void	set_C(Point const &C);

		bool	is_inside(Point const &P) const;

	private:
		// Vertices
		Point const	_A;
		Point const	_B;
		Point const	_C;

		// Sides
		Line const	_AB;
		Line const	_BC;
		Line const	_CA;
};

#endif
