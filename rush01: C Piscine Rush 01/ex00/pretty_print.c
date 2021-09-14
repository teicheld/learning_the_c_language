/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretty_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:21:28 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/11 15:21:29 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"

void	print_grid(int **grid, int size)
{
	int	index;
	int	jndex;

	index = 0;
	while (index < size)
	{
		jndex = 0;
		while (jndex < size)
		{
			str_write_char((char)(grid[index][jndex] + '0'));
			if (jndex != size - 1)
				str_write(" ");
			jndex++;
		}
		if (index != size - 1)
			str_write("\n");
		index++;
	}
}
