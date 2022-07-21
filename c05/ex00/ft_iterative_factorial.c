/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:05:10 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/16 19:38:44 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int fact;

	if (nb == 0)
		return (0);

	fact = 1;
	while (nb != 1)
	{
		fact *= nb;
		nb--;
	}
	return(fact);
}

int main(void)
{
	printf("%d",ft_iterative_factorial(10));
	return 0;
}
