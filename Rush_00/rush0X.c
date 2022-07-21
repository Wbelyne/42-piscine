/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:12:08 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/09 18:52:15 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fonctions.h"

int	rush(int a, int b)
{
	int		c;
	int		i;

	c = a;
	i = 2;
	
	ft_putchar('o');
	while (a >= i  || a != i) 
	{
		ft_putchar('-');
		a--;
	}
	ft_putchar('o');
	while (b > i || b != i)
	{
		ft_putchar('\n');
		ft_putchar('|');
		b--;
	}
	if (b == i)
	{
		ft_putchar('\n');
		ft_putchar('o');
	}
	return 0;
}

int main(int argc, char const *argv[])
{
   rush(1,5);
	return 0;
}
