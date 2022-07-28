/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_current_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseibold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:54:03 by aseibold          #+#    #+#             */
/*   Updated: 2022/07/16 18:54:06 by aseibold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_number_boxes.h"

int	find_empty_cell(int array[6][6], int *r, int *c)
{
	*r = 1;
	while (*r < 5)
	{
		*c = 1;
		while (*c < 5)
		{
			if (array[*r][*c] == -1)
				return (1);
			(*c)++;
		}
		(*r)++;
	}
	return (0);
}

int	already_in_row(int array[6][6], int r, int digit)
{
	int	c;

	c = 1;
	while (c < 5)
	{
		if (array[r][c] == digit)
			return (1);
		c++;
	}
	return (0);
}

int	already_in_column(int array[6][6], int c, int digit)
{
	int	r;

	r = 1;
	while (r < 5)
	{
		if (array[r][c] == digit)
			return (1);
		r++;
	}
	return (0);
}

int	conforms_with_requirements(int array[6][6], int r, int c, int digit)
{
	int	temp;
	int	conforms;

	temp = array[r][c];
	array[r][c] = digit;
	if (!(number_of_visible_boxes_left(array, r) == array[r][0]))
		conforms = 0;
	else if (!(number_of_visible_boxes_right(array, r) == array[r][5]))
		conforms = 0;
	else if (!(number_of_visible_boxes_up(array, c) == array[0][c]))
		conforms = 0;
	else if (!(number_of_visible_boxes_down(array, c) == array[5][c]))
		conforms = 0;
	else
		conforms = 1;
	array[r][c] = temp;
	return (conforms);
}

int	safe_to_put_digit(int array[6][6], int r, int c, int digit)
{
	if (already_in_row(array, r, digit))
		return (0);
	if (already_in_column(array, c, digit))
		return (0);
	if (array[r][c] != -1)
		return (0);
	if (!conforms_with_requirements(array, r, c, digit))
		return (0);
	return (1);
}
