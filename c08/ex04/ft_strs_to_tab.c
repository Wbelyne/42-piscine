/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:44:05 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/27 15:18:00 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(str[i].str);
		i++;
	}
	str[i].str = 0;
	return (str);
}
