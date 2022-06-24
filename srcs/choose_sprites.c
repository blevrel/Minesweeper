/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sprites.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:28:09 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/24 14:07:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	*choose_hover_sprite(t_all *struc)
{
	void	*sprite;

	if (struc->matrix[struc->mouse_pos.y][struc->mouse_pos.x] == '0')
		sprite = struc->sprites.tile_hover;
	if (struc->matrix[struc->mouse_pos.y][struc->mouse_pos.x] == 'B')
		sprite = struc->sprites.tile_hover;
	if (struc->matrix[struc->mouse_pos.y][struc->mouse_pos.x] == 'F')
		sprite = struc->sprites.flag_hover;
	return (sprite);
}

void	*choose_sprite_when_clicked(t_all *struc)
{
	void	*sprite;

	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == 'E')
		sprite = struc->sprites.clicked_tile;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == 'B')
		end_prog(struc, 1);
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '1')
		sprite = struc->sprites.nb_1;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '2')
		sprite = struc->sprites.nb_2;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '3')
		sprite = struc->sprites.nb_3;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '4')
		sprite = struc->sprites.nb_4;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '5')
		sprite = struc->sprites.nb_5;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '6')
		sprite = struc->sprites.nb_6;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '7')
		sprite = struc->sprites.nb_7;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == '8')
		sprite = struc->sprites.nb_8;
	if (struc->finished_mat[struc->mouse_pos.y][struc->mouse_pos.x] == 'Z')
		sprite = struc->sprites.border;
	return (sprite);
}

void	*choose_sprite(t_all *struc)
{
	void	*sprite;

	if (struc->matrix[struc->position.y][struc->position.x] == '0')
		sprite = struc->sprites.tile;
	if (struc->matrix[struc->position.y][struc->position.x] == 'B')
		sprite = struc->sprites.tile;
	if (struc->matrix[struc->position.y][struc->position.x] == '1')
		sprite = struc->sprites.nb_1;
	if (struc->matrix[struc->position.y][struc->position.x] == '2')
		sprite = struc->sprites.nb_2;
	if (struc->matrix[struc->position.y][struc->position.x] == '3')
		sprite = struc->sprites.nb_3;
	if (struc->matrix[struc->position.y][struc->position.x] == '4')
		sprite = struc->sprites.nb_4;
	if (struc->matrix[struc->position.y][struc->position.x] == '5')
		sprite = struc->sprites.nb_5;
	if (struc->matrix[struc->position.y][struc->position.x] == '6')
		sprite = struc->sprites.nb_6;
	if (struc->matrix[struc->position.y][struc->position.x] == '7')
		sprite = struc->sprites.nb_7;
	if (struc->matrix[struc->position.y][struc->position.x] == '8')
		sprite = struc->sprites.nb_8;
	if (struc->matrix[struc->position.y][struc->position.x] == 'Z')
		sprite = struc->sprites.border;
	if (struc->matrix[struc->position.y][struc->position.x] == 'E')
		sprite = struc->sprites.clicked_tile;
	if (struc->matrix[struc->position.y][struc->position.x] == 'F')
		sprite = struc->sprites.flag;
	return (sprite);
}
