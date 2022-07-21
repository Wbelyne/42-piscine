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
#ifndef CHECK_CURRENT_POSITION_H
# define CHECK_CURRENT_POSITION_H

int	find_empty_cell(int array[6][6], int *r, int *c);

int	already_in_row(int array[6][6], int r, int digit);

int	already_in_column(int array[6][6], int c, int digit);

int	conforms_with_requirements(int array[6][6], int r, int c, int digit);

int	safe_to_put_digit(int array[6][6], int r, int c, int digit);

#endif
