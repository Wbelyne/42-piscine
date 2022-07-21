/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:28:23 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/21 15:52:29 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		k;
	int		*tab;

	k = 0;
	j = 0;
	i = 0;
	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	while (min++ < max)
	{
		k++;
		i++;
	}
	tab = malloc(sizeof(*tab) * i);
	while (i > 0)
	{
		(*range)[j++] = max - i;
		i--;
	}
	return(k);
}

int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}