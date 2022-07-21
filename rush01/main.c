/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseibold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:54:28 by aseibold          #+#    #+#             */
/*   Updated: 2022/07/16 18:54:30 by aseibold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "check_current_position.h"
#include "get_number_boxes.h"
#include "initialize.h"
#include "print.h"

int	solve_puzzle(int array[6][6])
{
	int	r;
	int	c;
	int	digit;

	if (!find_empty_cell(array, &r, &c))
		return (1);
	digit = 1;
	while (digit <= 4)
	{
		if (safe_to_put_digit(array, r, c, digit))
		{
			array[r][c] = digit;
			if (solve_puzzle(array))
				return (1);
			array[r][c] = -1;
		}
		digit++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	table[6][6];

	if (check_error(argc, argv) == 0)
		ft_putstr("Error\n");
	else
	{
		init_array(argv[1], table);
		if (solve_puzzle(table) == 1)
			print_result(table);
		else
			ft_putstr("Error\n");
	}
}
