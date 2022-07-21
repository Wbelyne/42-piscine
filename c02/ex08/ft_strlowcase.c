/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:56:37 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/14 14:54:51 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 64 && *str <= 90)
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}
// int		main()
// {
// 	char c[] = "AbCdEfG-Yz";
// 	ft_putstr("abcdefg-yz:");
// 	ft_putstr(ft_strlowcase(c));
// 	ft_putstr(":");
// 	ft_putstr(c);
// }
