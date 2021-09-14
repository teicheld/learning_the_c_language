/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:20:14 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/10 12:20:27 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"

int	ft_sqrt(int nb, t_bool return_zero_if_float)
{
	unsigned int		sqrt;
	unsigned int		index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= (unsigned int)nb)
		index++;
	index -= 1;
	if (return_zero_if_float)
		return (index * index == (unsigned int)nb ? index : 0);
	return (index);
}

int	ft_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
