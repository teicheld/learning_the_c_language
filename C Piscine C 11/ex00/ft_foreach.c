/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:11:48 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/16 11:11:48 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	if (length <= 0)
		return ;
	(*f)(tab[0]);
	ft_foreach(tab + 1, length - 1, f);
}
