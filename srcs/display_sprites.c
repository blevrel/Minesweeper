/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sprites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:34:04 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/20 14:26:51 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	display_tiles(t_all *struc)
{
	struc->position.y = 0;
	while (struc->position.y < HEIGHT)
	{
		struc->position.x = 0;
		while (struc->position.x < WIDTH)
		{
			mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
				struc->sprites.tile, struc->position.x * PIX,
				struc->position.y * PIX);
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
	display_tiles(struc);
	mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
		struc->sprites.tile_hover, struc->mouse_pos.x * PIX,
		struc->mouse_pos.y * PIX);
}
