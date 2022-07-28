/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:07:51 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/25 12:31:38 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		j;
	int		*tab;

	j = 0;
	i = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		min++;
		i++;
	}
	tab = (int *)malloc(sizeof(*tab) * i);
	while (i > 0)
	{
		tab[j] = max - i;
		j++;
		i--;
	}
	return (tab);
}
