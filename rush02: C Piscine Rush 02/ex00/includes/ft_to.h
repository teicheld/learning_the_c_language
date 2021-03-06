/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:22:22 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/17 12:22:22 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TO_H
# define FT_TO_H

# include <ft_boolean.h>

# include "ft_short_types.h"

int		ft_atoi(char *str);

ULNG	ft_atoi_strict(char *str);

t_bool	ft_itow(t_dict *dict, ULNG number, t_bool *put_space, t_bool print);

#endif
