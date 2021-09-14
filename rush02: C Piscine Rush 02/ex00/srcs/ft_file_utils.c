/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teicheld <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:27:40 by teicheld          #+#    #+#             */
/*   Updated: 2021/07/17 11:27:40 by teicheld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int		ft_close_file(int fd)
{
	return (close(fd));
}
