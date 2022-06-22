/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finished_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:28:31 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/22 18:44:23 by blevrel          ###   ########.fr       */
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
		while (x < WIDTH)
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
	int		check_y = y - 1;
	int		count = 0;

	if (struc->matrix[y][x] == 'B')
		return ('B');
	if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
		return ('Z');
	while ((check_x <= x + 1) && (check_y <= y + 1))
	{
		if (struc->matrix[check_y][check_x] == 'B')
			count++;
		if (check_y == y + 1 && check_x <= x + 1)
		{
			check_x++;
			check_y = y - 1;
			continue;
		}
		check_y++;
	}
	return (count + 48);
}
