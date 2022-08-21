/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:53:32 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/21 15:24:15 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

int	main()
{
	Point A = Point();
	Point B = Point(Fixed(1), Fixed(1));
	Point C = Point(Fixed(2), Fixed(0));

	Point P1 = Point(Fixed(0), Fixed(1));
	Point P2 = Point(Fixed(1), Fixed(0));
	Point P3 = Point(Fixed(1), Fixed(0.5f));
	Point P4 = Point(Fixed(2), Fixed(2));

	std::cout << "P1 is inside triangle: " << bsp(A, B, C, P1) << std::endl;
	std::cout << "P2 is inside triangle: " << bsp(A, B, C, P2) << std::endl;
	std::cout << "P3 is inside triangle: " << bsp(A, B, C, P3) << std::endl;
	std::cout << "P4 is inside triangle: " << bsp(A, B, C, P4) << std::endl;
}
