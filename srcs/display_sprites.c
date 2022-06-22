/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sprites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:34:04 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/22 19:19:47 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	display_init_tiles(t_all *struc)
{
	struc->position.y = 0;
	while (struc->position.y < HEIGHT)
	{
		struc->position.x = 0;
		while (struc->position.x < WIDTH)
		{
			if (struc->matrix[struc->position.y][struc->position.x] == '0'
				|| struc->matrix[struc->position.y][struc->position.x] == 'B')
			{
				mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
					struc->sprites.tile, struc->position.x * PIX,
					struc->position.y * PIX);
			}
			if (struc->matrix[struc->position.y][struc->position.x] == 'Z')
			{
				mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
					struc->sprites.border, struc->position.x * PIX,
					struc->position.y * PIX);
			}
			struc->position.x++;
		}
		struc->position.y++;
	}
}

void	display_correct_sprite(t_all *struc)
{
	display_hovered_sprites(struc);
}

void	display_hovered_sprites(t_all *struc)
{
	display_init_tiles(struc);
	if (struc->mouse_pos.x * PIX >= PIX && struc->mouse_pos.x * PIX < WINWIDTH - PIX
		&& struc->mouse_pos.y * PIX >= PIX && struc->mouse_pos.y * PIX < WINHEIGHT - PIX)
	{
		mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
			struc->sprites.tile_hover, struc->mouse_pos.x * PIX,
			struc->mouse_pos.y * PIX);
	}
}
