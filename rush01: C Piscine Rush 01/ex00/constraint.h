/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:57:12 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/10 13:56:37 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTRAINT_H
# define CONSTRAINT_H

# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

typedef struct	s_constr
{
	int	size;
	int	*v;
}				t_constr;

t_constr		create_constraint(int size, char *str, int offset);

#endif
