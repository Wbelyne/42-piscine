/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number_boxes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseibold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:54:13 by aseibold          #+#    #+#             */
/*   Updated: 2022/07/16 18:54:16 by aseibold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	number_of_visible_boxes_left(int array[6][6], int r)
{
	int	visible;
	int	c;
	int	max;

	visible = 0;
	max = -2;
	c = 1;
	while (c <= 4)
	{
		if (array[r][c] == -1)
			return (array[r][0]);
		if (array[r][c] > max)
		{
			max = array[r][c];
			visible += 1;
		}
		c++;
	}
	return (visible);
}

int	number_of_visible_boxes_right(int array[6][6], int r)
{
	int	visible;
	int	c;
	int	max;

	visible = 0;
	max = -2;
	c = 4;
	while (c >= 1)
	{
		if (array[r][c] == -1)
			return (array[r][5]);
		if (array[r][c] > max)
		{
			max = array[r][c];
			visible += 1;
		}
		c--;
	}
	return (visible);
}

int	number_of_visible_boxes_up(int array[6][6], int c)
{
	int	visible;
	int	r;
	int	max;

	visible = 0;
	max = -2;
	r = 1;
	while (r <= 4)
	{
		if (array[r][c] == -1)
			return (array[0][c]);
		if (array[r][c] > max)
		{
			max = array[r][c];
			visible += 1;
		}
		r++;
	}
	return (visible);
}

int	number_of_visible_boxes_down(int array[6][6], int c)
{
	int	visible;
	int	r;
	int	max;

	visible = 0;
	max = -2;
	r = 4;
	while (r >= 1)
	{
		if (array[r][c] == -1)
			return (array[5][c]);
		if (array[r][c] > max)
		{
			max = array[r][c];
			visible += 1;
		}
		r--;
	}
	return (visible);
}
