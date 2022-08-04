/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:31:50 by antoine           #+#    #+#             */
/*   Updated: 2022/08/04 17:14:55 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// #include <iostream>
int	main()
{
	Fixed	a(21);
	Fixed	b(3.5f);
	Fixed	c;

	c = a;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;

	if (a < b)
		std::cout << a << " < " << b << std::endl;
	if (a > b)
		std::cout << a << " > " << b << std::endl;
	if (b >= c)
		std::cout << b << " >= " << c << std::endl;
	if (a <= c)
		std::cout << a << " <= " << c << std::endl;
	if (a == b)
		std::cout << a << " == " << b << std::endl;
	if (a != b)
		std::cout << a << " != " << b << std::endl;
	if (a == c)
		std::cout << a << " == " << c << std::endl;
	if (a != c)
		std::cout << a << " != " << c << std::endl;
	if (b == c)
		std::cout << b << " == " << c << std::endl;
	if (b != c)
		std::cout << b << " != " << c << std::endl;

	Fixed d, e;

	std::cout << "d: " << d << std::endl;
	std::cout << "d++: " << d++ << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "++d: " << ++d << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "e: " << e << std::endl;
	std::cout << "--e: " << --e << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "e--: " << e-- << std::endl;
	std::cout << "e: " << e << std::endl;

	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

	Fixed const	f(12.12f);
	Fixed const	g(42.42f);

	std::cout << "min(f, g): " << Fixed::min(f, g) << std::endl;
	std::cout << "max(f, g): " << Fixed::max(f, g) << std::endl;

	return (0);
}
