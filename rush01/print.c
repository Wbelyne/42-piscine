/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseibold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:54:36 by aseibold          #+#    #+#             */
/*   Updated: 2022/07/16 18:54:39 by aseibold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_result(int array[6][6])
{
	int	r;
	int	c;

	r = 1;
	c = 1;
	while (r < 5)
	{
		c = 1;
		while (c < 5)
		{
			ft_putchar(array[r][c] + 48);
			if (c % 4 != 4)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
