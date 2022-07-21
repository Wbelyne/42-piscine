/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:19:43 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/16 14:54:04 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

char	*ft_union(char *s1,char *s2)
{
	int	i;
	char	dest[100];

	i = 0;
	dest[0] = "";
	while (s1[i] != '\0')
	{
		//if (s1[i] >= 'a' && s1[i] <= 'z')
			ft_putchar(s1[i]);
		i++;
	}


}

int	main(void)
{
	char s1[] = "je mange";
	char s2[] = "aljmy";
	ft_union(s1,s2);
	return (0);
}
