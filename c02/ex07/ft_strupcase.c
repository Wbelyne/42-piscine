/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:42:52 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/14 14:54:16 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}
// int		main()
// {
// 	char c[] = "AbCdEfG-Yz";
// 	ft_putstr("ABCDEFG-YZ:");
// 	ft_putstr(ft_strupcase(c));
// 	ft_putstr(":");
// 	ft_putstr(c);
// }
