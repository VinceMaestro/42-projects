/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:25:36 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/05 18:43:19 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	if (s && fd)
	{
		i = 0;
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

int		ft_display_file(char *argv)
{
	int		open_fd;
	char	**line;
	int		end;

	open_fd = open(argv, O_RDWR);
	if (open_fd == -1)
	{
		ft_putstr_fd("open file () failed \n", 2);
		return (-1);
	}
	ft_putnbr(get_next_line(open_fd, line));
	ft_putstr(*line);
	if (close(open_fd) == -1)
	{
		ft_putstr_fd("close file () failed \n", 2);
		return (-1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (-1);
	}
	else if (argc == 2)
		return (ft_display_file(argv[1]));
	ft_putstr_fd("Too many arguments.\n", 2);
	return (-1);
}