/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:22:35 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/10 15:23:26 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "fonctions.h"

void	print_middle(char c, char d, int x, int y)
{
	int		i;

	i = 0;
	while (y-- > 2)
	{
		ft_putchar(c);
		i = 3;
		while (x >= i && x != 1)
		{
			ft_putchar(d);
			i++;
		}
		if (x != 1)
		{
			ft_putchar(c);
		}
		ft_putchar('\n');
	}
}

void	rush_racc(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	else if (x == 1 && y == 1)
		ft_putchar('o');
	else if (x == 1 && y != 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		print_middle('|', ' ', x, y);
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	print_top_bot(char c, char d, int h)
{
	int		i;

	i = 2;
	ft_putchar(c);
	while (i < h && h > 1)
	{
		ft_putchar(d);
		i++;
	}
	if (h > 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	rush_racc(x, y);
	if (y == i && x != i)
	{
		print_top_bot('o', '-', x);
	}
	j = 1;
	while ((i < x && j < y))
	{
		print_top_bot('o', '-', x);
		print_middle('|', ' ', x, y);
		print_top_bot('o', '-', x);
		i++;
		return ;
	}
}

int	main(void)
{
	rush(10, 1);
	return (0);
}
