/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:36:40 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/13 15:36:40 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_write(int fd, char *str)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}
