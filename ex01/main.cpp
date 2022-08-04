/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:31:50 by antoine           #+#    #+#             */
/*   Updated: 2022/08/04 13:48:14 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// #include <iostream>
int	main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	Fixed	d(42);
	Fixed	e(-42);
	Fixed	f(99);

	std::cout << 42 << " -> " << d.toInt() << std::endl;
	std::cout << -42 << " -> " << e << std::endl;
	std::cout << 99 << " -> " << f.toInt() << std::endl;

	Fixed	g(42.12f);
	Fixed	h(1.111111111f);
	Fixed	i(-42.12454f);

	std::cout << 42.12f << "->" << g << std::endl;
	std::cout << 1.111111111f << "->" << h << std::endl;
	std::cout << -42.12454f << "->" << i << std::endl;
	return (0);
}
