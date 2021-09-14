/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:56:34 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/14 17:56:34 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_UTILS_H
# define FT_TAIL_UTILS_H

int		open_file(char *executable, char *path);

int		close_file(char *executable, char *path, int fd);

void	show_error(char *executable, char *path);

char	*read_full(int fd, unsigned long *total_read);

#endif
