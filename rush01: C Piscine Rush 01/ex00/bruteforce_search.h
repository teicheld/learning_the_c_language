/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce_search.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:30:20 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/10 19:30:23 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRUTEFORCE_SEARCH_H
# define BRUTEFORCE_SEARCH_H

# include "boolean.h"
# include "constraint.h"

t_bool	search_solution(int **grid, int size, t_constr cnstr[4]);

#endif
