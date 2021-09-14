/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:18:13 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/17 20:18:13 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_char_write_to(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_char_write(char c)
{
	ft_char_write_to(OUT, c);
}
