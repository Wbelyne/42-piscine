/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:24:39 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/17 14:34:35 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		nbr;
	int		pow;

	pow = power;
	nbr	= nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (pow != 1)
	{	
		nb *= nbr;
		pow--;
	}
	return (nb);
}

int		main(int argc,char **argv)
{
	printf("%d",ft_iterative_power(2,5));
	return(0);
}