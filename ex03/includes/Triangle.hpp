/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:37:54 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/21 16:01:04 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TRIANGLE_HPP_
# define _TRIANGLE_HPP_

# include "Point.hpp"
# include "Line.hpp"

class	Triangle
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
		Line const &get_AB(void) const;
		Line const &get_BC(void) const;
		Line const &get_CA(void) const;

		// Setters
		void	set_A(Point const &A);
		void	set_B(Point const &B);
		void	set_C(Point const &C);
		void	set_AB(Line const &AB);
		void	set_BC(Line const &BC);
		void	set_CA(Line const &CA);

		// bsp
		bool	is_inside(Point const P) const;

	private:
		// Vertices
		Point	_A;
		Point	_B;
		Point	_C;

		// Sides
		Line	_AB;
		Line	_BC;
		Line	_CA;
};

#endif
