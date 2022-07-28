/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:56:36 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/25 12:30:58 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	c = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	if (!c)
	{
		return (NULL);
	}
	while (src[i] != '\0' )
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
