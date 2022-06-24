/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_finished.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:12:55 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/24 13:16:23 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

int	check_if_finished(t_all *struc)
{
	int	x;
	int	y = 0;
	
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			if (struc->matrix[y][x] != struc->finished_mat[y][x]
					&& !(struc->finished_mat[y][x] == 'B' && struc->matrix[y][x] == 'F'))
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}
