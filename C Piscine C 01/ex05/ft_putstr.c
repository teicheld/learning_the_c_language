/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:52:41 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/01 13:52:45 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char next_char;

	while (true)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			break ;
		}
		ft_putchar(next_char);
		str++;
	}
}
