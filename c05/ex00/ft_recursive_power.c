/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:26:36 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/17 14:38:29 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (nb == 0 && power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb,power - 1));
}

int		main(void)
{
	printf("%d",ft_recursive_power(2,5));
	return (0);
}