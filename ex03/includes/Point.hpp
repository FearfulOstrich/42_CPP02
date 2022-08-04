/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:36:28 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/04 17:50:33 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_

# include "Fixed.hpp"

class	Point
{
	public:
		// Constructors
		Point(void);
		Point(Point const &other);
		Point(Fixed const &x, Fixed const &y);
		// Destructors
		~Point(void)

		//Assignment operator
		Point	&operator=(Point const	&other);

		// getters.
		Fixed const	&get_x(void) const;
		Fixed const	&get_y(void) const;

		//setters.
		void	set_x(Fixed const &x);
		void	set_y(Fixed const &y);

	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif
