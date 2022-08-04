/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:48:34 by antoine           #+#    #+#             */
/*   Updated: 2022/08/03 16:09:36 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &other);
		Fixed(int const n);
		Fixed(float const f);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(Fixed const &other);

	private:
		int					_n;
		static int const	_frac_bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
