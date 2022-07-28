/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:32:57 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/25 17:39:15 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	allocation_size(int size, char **strs, char *sep)
{
	int	i;
	int	somme;

	somme = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		somme += ft_strlen(strs[i]);
		somme += ft_strlen(sep);
		i++;
	}
	return (somme);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		c;

	dest = (char *)malloc(sizeof(char) * allocation_size(size, strs, sep) + 1);
	i = 0;
	j = 0;
	c = 0;
	if (!dest)
		return (NULL);
	if (size == 0)
		return (dest);
	while (i < size)
	{	
		j = 0;
		while (strs[i][j] != '\0')
			dest[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			dest[c++] = sep[j++];
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
