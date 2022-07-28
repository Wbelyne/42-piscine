/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:07:38 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/22 13:50:14 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_double_2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c);
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles_1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (check_doubles_1(argv[1], argv[1][i], i))
				write (1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (check_double_2(argv[1], argv[2][i]))
					{
					if (check_doubles_1(argv[2], argv[2][i], i));
						write (1, &argv[2][i], 1);
					}
			
				i++;
		}
	}
	return (0);
}


