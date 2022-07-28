/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:31:24 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/17 19:42:26 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (str[i] == to_find[0])
		{
			while (str[i] != '\0' && str[i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str);
			to_find++;
		}
		str++;
	}
	return (0);
}
