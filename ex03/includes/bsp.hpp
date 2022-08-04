/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:49:59 by aalleon           #+#    #+#             */
/*   Updated: 2022/08/04 17:52:50 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BSP_HPP_
# define _BSP_HPP_

# include "Fixed.hpp"
# include "Point.hpp"
# include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
