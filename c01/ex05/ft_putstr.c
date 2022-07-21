<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:13:09 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/10 19:14:36 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] > '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
=======
#include <unistd.h>
#include <stdio.h> 

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int    i;

    i = 0;
    while (str[i] > '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    /*while (strr > count)
    {
        ft_putchar(strr);
        strr++;
    }*/
}

int main(void)
{
    ft_putstr("couccd je suis jo");
    return 0;
>>>>>>> cae82b72852ed5a2e76bd634f458e8f363199540
}
