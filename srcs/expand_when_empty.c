/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_when_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:17:01 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/28 14:51:36 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	expand_when_empty(t_all *struc, int x, int y)
{
	int	check_x = x - 1;
	int	check_y = y - 1;
	while (check_x <= x + 1 && check_y <= y + 1)
	{
		if (struc->finished_mat[check_y][check_x] == 'E')
		{
			mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
				choose_sprite_when_clicked(struc), check_x * PIX,
				check_y * PIX);
			struc->matrix[check_y][check_x]
				= struc->finished_mat[check_y][check_x];
		}
		if (check_y == y + 1 && check_x <= x + 1)
		{
			check_x++;
			check_y = y - 1;
			continue;
		}
		check_y++;
	}
}
