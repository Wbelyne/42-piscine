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

#ifndef INITIALIZE_H
# define INITIALIZE_H

int		str_length(char *str);

int		check_error(char count, char *str[]);

void	init_first_last_row(char *input, int array[6][6]);

void	init_first_last_column(char *input, int array[6][6]);

void	init_array(char *input, int array[6][6]);

#endif
