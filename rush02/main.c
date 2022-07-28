/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:33:19 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/24 20:12:24 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"
#define BUFFER 4096

int	main(void)
{
	int	fd;
	int	ret;
	int	i;
	char	buf[BUFFER + 1];

	i = 0;
	fd = open("dict", O_RDONLY);
	ft_putchar('h');

	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ret = read(fd, buf, BUFFER);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}
