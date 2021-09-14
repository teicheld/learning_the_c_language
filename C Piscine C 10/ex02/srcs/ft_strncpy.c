/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:02:34 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/14 19:02:34 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_sized_copy(char *dest, char *src, unsigned int src_size)
{
	unsigned int	index;

	index = 0;
	while (index < src_size)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
