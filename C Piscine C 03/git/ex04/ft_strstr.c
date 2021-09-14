/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:45:27 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/04 14:45:29 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *haystack;
	char *needle;

	if (*to_find == '\0')
		return (str);
	haystack = str;
	needle = to_find;
	while (true)
	{
		if (*needle == '\0')
			return ((char *)(haystack - (needle - to_find)));
		if (*haystack == *needle)
			needle++;
		else
			needle = to_find;
		if (*haystack == '\0')
			break ;
		haystack++;
	}
	return (0);
}
