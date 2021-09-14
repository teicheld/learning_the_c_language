/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equal_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:02:55 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/15 19:02:55 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_equal(char *a, char *b, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		if ((unsigned char)a[index] != (unsigned char)b[index])
			return (false);
		index++;
	}
	return (true);
}
