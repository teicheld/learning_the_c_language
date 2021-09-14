/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dumper.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:29:46 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/15 13:29:46 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DUMPER_H
# define FT_DUMPER_H

# include "ft_args_parser.h"

# define UINT unsigned int

void	ft_dump(t_options *options, char *content, UINT length, UINT lines);

#endif
