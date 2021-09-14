/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:03:16 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/10 17:03:17 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "boolean.h"
# include "constraint.h"

# define DIR_L_T_R 1
# define DIR_R_T_L -1
# define DIR_U_T_D 1
# define DIR_D_T_U -1

t_bool	check_grid_validity(int **grid, int size, t_constr cnstr[4]);

#endif
