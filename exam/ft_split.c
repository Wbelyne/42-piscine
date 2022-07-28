/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:44:35 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/28 17:47:52 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
# define WRD_LEN 10000
int	str_isspace(char str)
{
	if (str == ' ' || str == '\t')
		return (1);
	return (0);
}

int	count_wrd(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && str_isspace(*str))
			str++;
		if (*str && !str_isspace(*str))
		{
			while (*str && !str_isspace(*str))
				str++;
			count++;
		}		
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**dest;
	int	size;
	int	j;
	int	i2;
	int	i;
	
	i2 = 0;
	j = 0;
	i = 0;
	size = count_wrd(str);
	dest =  (char **)malloc(sizeof(**dest) * (size + 1));
	while (str[j] != '\0')
	{
		while (str_isspace(str[j]))
			j++;
		dest[i] = malloc(sizeof(char) * WRD_LEN);
		if (str_isspace(str[i]) == 0)
		{
			dest[i2][i] = str[j];
			i++;
		}
		if (str_isspace(str[j]) == 1)
		{
			i2++;
		}
		j++;
		
	}
	return (dest);
}

int	main(void)
{
	char	**arr;
	char	*phrase;

	phrase = "je suis un hero";
	arr = ft_split(phrase);
	printf("%s", arr[0]);
	printf("%s", arr[1]);
	printf("%s", arr[2]);
	printf("%s", arr[3]);
	return (0);
}
