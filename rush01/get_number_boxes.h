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

#ifndef GET_NUMBER_BOXES_H
# define GET_NUMBER_BOXES_H

int	number_of_visible_boxes_left(int array[6][6], int r);

int	number_of_visible_boxes_right(int array[6][6], int r);

int	number_of_visible_boxes_up(int array[6][6], int c);

int	number_of_visible_boxes_down(int array[6][6], int c);

#endif
