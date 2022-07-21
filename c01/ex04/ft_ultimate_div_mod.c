<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:08:12 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/10 19:12:34 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
=======
#include <unistd.h>
#include <stdio.h> 

void ft_ultimate_div_mod(int *a, int *b)
 {
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
 }


int	main(void)
{
	int a = 20;
	int b = 2;
	int *divint1 = &a;
	int *modint1 = &b;
	ft_ultimate_div_mod(divint1,modint1);
}
>>>>>>> cae82b72852ed5a2e76bd634f458e8f363199540
