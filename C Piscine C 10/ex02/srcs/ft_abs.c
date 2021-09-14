/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:09:08 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/14 15:09:08 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_abs_int(int number)
{
	if (number < 0)
		return (-number);
	return ((unsigned int)number);
}
