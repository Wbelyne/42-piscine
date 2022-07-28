/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseibold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:54:21 by aseibold          #+#    #+#             */
/*   Updated: 2022/07/16 18:54:23 by aseibold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_error(char count, char *str[])
{
	int	i;

	i = 0;
	if (count != 2)
		return (0);
	if (str_length(str[1]) != 31)
		return (0);
	while (str[1][i])
	{
		if (i % 2 != 0)
		{
			if (str[1][i] != ' ')
				return (0);
		}
		else
		{
			if (str[1][i] < '1' || str[1][i] > '4')
				return (0);
		}
		i++;
	}
	return (1);
}

void	init_first_last_row(char *input, int array[6][6])
{
	int	s;
	int	r;
	int	c;

	s = 0;
	r = 0;
	c = 1;
	while (c <= 4)
	{
		array[r][c] = input[s] - 48;
		c++;
		s += 2;
	}
	r = 5;
	c = 1;
	while (c <= 4)
	{
		array[r][c] = input[s] - 48;
		c++;
		s += 2;
	}
}

void	init_first_last_column(char *input, int array[6][6])
{
	int	s;
	int	r;
	int	c;

	s = 16;
	r = 1;
	c = 0;
	while (r <= 4)
	{
		array[r][c] = input[s] - 48;
		r++;
		s += 2;
	}
	r = 1;
	c = 5;
	while (r <= 4)
	{
		array[r][c] = input[s] - 48;
		r++;
		s += 2;
	}
}

void	init_array(char *input, int array[6][6])
{
	int	r;
	int	c;

	init_first_last_row(input, array);
	init_first_last_column(input, array);
	r = 1;
	while (r <= 4)
	{
		c = 1;
		while (c <= 4)
		{
			array[r][c] = -1;
			c++;
		}
		r++;
	}
	array[0][0] = 0;
	array[0][5] = 0;
	array[5][0] = 0;
	array[5][5] = 0;
}
