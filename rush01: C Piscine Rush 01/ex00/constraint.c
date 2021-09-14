/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:57:58 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/10 14:04:01 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "constraint.h"
#include "is.h"

t_constr	create_constraint(int size, char *str, int offset)
{
	int			index;
	t_constr	constraint;

	constraint.size = size;
	constraint.v = (int *)malloc((size + 1) * sizeof(int));
	index = 0;
	while (index < size)
	{
		if (!*str)
			break ;
		if (is_number(*str))
		{
			if (offset)
				offset--;
			else
			{
				constraint.v[index] = *str - '0';
				index++;
			}
		}
		str++;
	}
	return (constraint);
}
