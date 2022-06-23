/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sprites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:34:04 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/23 16:34:02 by blevrel          ###   ########.fr       */
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
			mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
				choose_sprite(struc), struc->position.x * PIX,
				struc->position.y * PIX);
			struc->position.x++;
		}
		struc->position.y++;
	}
}

void	display_clicked_sprites(t_all *struc)
{
	if (struc->mouse_pos.button == 1)
	{
		mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
			choose_sprite_when_clicked(struc), struc->mouse_pos.x * PIX,
			struc->mouse_pos.y * PIX);
		struc->matrix[struc->mouse_pos.y][struc->mouse_pos.x]
			= struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x];
	}
	//if (struc->mouse_pos.button == 2)
	//afficher flag
}

void	display_correct_sprite(t_all *struc, int trigger)
{
	if (trigger == 0)
		display_hovered_sprites(struc);
	else if (trigger == 1)
		display_clicked_sprites(struc);
}

void	display_hovered_sprites(t_all *struc)
{
	display_init_tiles(struc);
	if (struc->matrix[struc->mouse_pos.y][struc->mouse_pos.x] == '0'
		|| struc->matrix[struc->mouse_pos.y][struc->mouse_pos.x] == 'F')
	{
		if (struc->mouse_pos.x * PIX >= PIX && struc->mouse_pos.x * PIX < WINWIDTH - PIX
			&& struc->mouse_pos.y * PIX >= PIX && struc->mouse_pos.y * PIX < WINHEIGHT - PIX)
		{
			mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
				choose_hover_sprite(struc), struc->mouse_pos.x * PIX,
				struc->mouse_pos.y * PIX);
		}
	}
}
