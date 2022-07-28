/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:01:19 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/28 17:18:05 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src, char j)
{
	char	*c;
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (src[k] != '\0')
		k++;
	c = (char *)malloc(sizeof(char) * (k + 1));
	if (!c)
		return (NULL);
	while (i < j && src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

int	str_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	len_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && str_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (*str)
	{
		while (*str && str_is_charset(*str, charset) == 1)
			str++;
		i = len_word(str, charset);
			str += i;
		if (i)
			res++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char		**dest;
	int			size;
	int			i;
	int			j;

	i = 0;
	size = count_word(str, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (str_is_charset(*str, charset))
			str++;
		j = len_word(str, charset);
		dest[i] = ft_strdup(str, j);
		str += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}
