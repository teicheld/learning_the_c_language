/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:15:42 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/15 13:15:42 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_file_utils.h"
#include "ft_strncpy.h"

char	*ft_extend_array(char *orig, char *n_cont, UINT old_len, UINT *len)
{
	char *dest;

	if (!(dest = malloc((*len + 1) * sizeof(char))))
		return (NULL);
	if (orig != NULL)
		ft_strncpy(dest, orig, old_len);
	ft_strncpy(dest + old_len, n_cont, (UINT)(*len - old_len));
	return (dest);
}
