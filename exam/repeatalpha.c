/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:12:41 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/21 16:36:09 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			while (count != 0)
			{
				write (1, &av[1][i], 1);
				count--;
			}
			count = 1;
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
