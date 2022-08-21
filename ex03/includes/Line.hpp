/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:28:34 by antoine           #+#    #+#             */
/*   Updated: 2022/08/21 17:01:22 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LINE_HPP_
# define _LINE_HPP_

#include "Point.hpp"

class	Line
{
	public:
		// Constructors.
		Line(void);
		Line(Line const &other);
		Line(Point const &A, Point const &B);

		// Destructor.
		~Line(void);

		// Assignement operator.
		Line	&operator=(Line const &other);

		// Getters
		Point const &get_A(void) const;
		Point const &get_B(void) const;

		// Setters
		void	set_A(Point const &A);
		void	set_B(Point const &B);

		// bsp
		int	p_dist(Point const P) const;

	private:
		Point	_A;
		Point	_B;
};

#endif
