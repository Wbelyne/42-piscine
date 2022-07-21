/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jpfeiffe <jpfeiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:08:03 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/10 19:07:26 by jpfeiffe         ###   ########.fr       */
=======
/*   By: wbelyne <wbelyne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:08:03 by jpfeiffe          #+#    #+#             */
/*   Updated: 2022/07/09 22:30:59 by wbelyne          ###   ########.fr       */
>>>>>>> cae82b72852ed5a2e76bd634f458e8f363199540
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d %d",*div,*mod);
}
<<<<<<< HEAD
=======

int	main(void)
{
	int a = 15;
	int b = 50;
	int divint = 0;
	int modint = 0;
	int *divint1 = &divint;
	int *modint1 = &modint;
	ft_div_mod(a,b,divint1,modint1);
	return 0;
}
>>>>>>> cae82b72852ed5a2e76bd634f458e8f363199540
