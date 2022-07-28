/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:33:46 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/23 15:45:35 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = nb;
	i = 0;
	while (i * i <= c)
	{
		if (i * i == c)
			return (i);
		i++;
	}
	return (0);
}
