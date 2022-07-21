<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:15:18 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/14 12:14:43 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] > '\0')
		i++;
	return (i);
}
int main(void)
{
	char tab[] = "jojo";
	printf("%d",ft_strlen(tab));
	return(0);
}
=======
#include <unistd.h>
#include <stdio.h> 


void    ft_putchar(char c)
{
        write(1, &c, 1);
}
 int ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] > '\0')
        i++;
    printf("%d",i);
    return i;
}

int main(void)
{
    ft_strlen("couccd je suis jo");
    return 0;
}
>>>>>>> cae82b72852ed5a2e76bd634f458e8f363199540
