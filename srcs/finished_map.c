/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finished_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:28:31 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/20 17:00:49 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

char	**gen_finished_mat(t_all *struc)
{
	int		y = 0;
	int		x;
	int		trigger = 1;
	char	**finished_mat;
	
	finished_mat = ft_calloc(HEIGHT + 1, sizeof(char**));
	while (y < HEIGHT)
	{
		x = 0;
		finished_mat[y] = ft_calloc(WIDTH + 1, sizeof(char));
		while (j < WIDTH)
		{
			finished_mat[y][x] = char_in_mat(struc, x, y);
			x++;
		}
		y++;
	}
	return (finished_mat);
}

char	char_in_mat(t_all *struc, int x, int y)
{
	char	c;
	int		check_x = x - 1;
	int		check_y;
	int		i = 0;
	int		j = 0;
	int		count = 0;

	while ((check_x <= x + 1) && (check_y <= y + 1))
	{
		check_y = y - 1;
		while (check_y <= y + 1)
		{
			if (struc->matrix[check_y][check_x] == 'B')
			{
				check_y++;
				count++;
			}
		}
	}
	return (c);
}
