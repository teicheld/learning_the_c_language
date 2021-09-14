/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:27:13 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/10 12:27:18 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	str_write(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	str_write_char(char c)
{
	write(1, &c, 1);
}
