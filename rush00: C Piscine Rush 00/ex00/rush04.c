/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:22:01 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/03 17:22:08 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

void	print_at(int line, int column, int max_l, int max_c)
{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == max_c)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == max_l)
	{
		if (column == 0)
			ft_putchar('C');
		else if (column == max_c)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 0 || column == max_c)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			print_at(line, column, y - 1, x - 1);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
