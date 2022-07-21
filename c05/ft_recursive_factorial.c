/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:35:52 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/16 18:05:54 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 2)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));

}

int	main(void)
{
	printf("%d",ft_recursive_factorial(6));
	return (0);
}
