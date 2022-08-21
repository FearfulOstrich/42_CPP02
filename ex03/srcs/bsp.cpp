/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:53:52 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/21 17:03:24 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Triangle	triangle;

	triangle = Triangle(a, b, c);
	return (triangle.is_inside(point));
}
