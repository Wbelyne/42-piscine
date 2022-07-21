/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:07:51 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/21 14:27:18 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int *ft_range(int min, int max)
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
	tab = malloc(sizeof(*tab) * i);
	while (i > 0)
	{
		tab[j] = max - i;
		j++;
		i--;
	}
	return(tab);
}


int	main(void)
{
	int *range;

	printf("Warn: Don't forget to check that the array is of the correct size manually ! Can't know size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	range = ft_range(3, 3);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}
// int main()
// {
// 	ft_range(20,30);
// 	return 0;
// }
