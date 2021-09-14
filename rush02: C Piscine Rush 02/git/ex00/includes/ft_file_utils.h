/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:28:16 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/17 11:28:16 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_UTILS_H
# define FT_FILE_UTILS_H

# define SIZE_1B 1
# define SIZE_1K 1024

int		ft_open_file(char *path);

int		ft_close_file(int fd);

#endif
