/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:32:21 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/14 15:11:37 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	if (src[i] < size)
	return (i);
}
// int main(int argc, char const *argv[])
// {
// 	char src[] = "gigopoi";
// 	char dest[] = "jojo";
// 	ft_strlcpy(dest, src, 9);
// 	return 0;
// }
