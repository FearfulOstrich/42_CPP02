/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:48:34 by antoine           #+#    #+#             */
/*   Updated: 2022/08/02 08:54:38 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed	&operator=(Fixed const &other);

	private:
		int					_n;
		static int const	_sep_pos;
};

#endif
