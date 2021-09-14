/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:18:13 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/17 20:18:13 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_str_write_to(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_str_write(char *str)
{
	ft_str_write_to(OUT, str);
}
