/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:30:37 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/14 14:53:12 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= 31) || (*str == 127))
			return (0);
	str++;
	}
	return (1);
}
// int		main(void)
// {
// 	char	c;

// 	c = 1;
// 	while (c != 0)
// 	{
// 		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
// 		{
// 			printf("Fail for char in decimal: %d\n", (int)c);
// 			return (0);
// 		}
// 		c++;
// 	}

// 	printf("Success\n");
// }
