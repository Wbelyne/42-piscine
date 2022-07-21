/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:39:52 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/18 11:27:32 by jpfeiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int	main(void)
{
	printf("%d",ft_fibonacci(3));	
	return 0;
}
