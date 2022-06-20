/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:42:37 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/19 09:45:29 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	load_images(t_all *struc)
{
	int			x;

	struc->sprites.tile = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/tile.xpm", &x, &x);
	struc->sprites.clicked_tile = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/clicked_tile.xpm", &x, &x);
	struc->sprites.flag = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/flag.xpm", &x, &x);
	struc->sprites.nb_1 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_1.xpm", &x, &x);
	struc->sprites.nb_2 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_2.xpm", &x, &x);
	struc->sprites.nb_3 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_3.xpm", &x, &x);
	struc->sprites.nb_4 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_4.xpm", &x, &x);
	struc->sprites.nb_5 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_5.xpm", &x, &x);
	struc->sprites.nb_6 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_6.xpm", &x, &x);
	struc->sprites.nb_7 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_7.xpm", &x, &x);
	struc->sprites.nb_8 = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_8.xpm", &x, &x);
	struc->sprites.tile_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/tile_hover.xpm", &x, &x);
	struc->sprites.clicked_tile_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/clicked_tile_hover.xpm", &x, &x);
	struc->sprites.flag_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/flag_hover.xpm", &x, &x);
	struc->sprites.nb_1_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_1_hover.xpm", &x, &x);
	struc->sprites.nb_2_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_2_hover.xpm", &x, &x);
	struc->sprites.nb_3_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_3_hover.xpm", &x, &x);
	struc->sprites.nb_4_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_4_hover.xpm", &x, &x);
	struc->sprites.nb_5_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_5_hover.xpm", &x, &x);
	struc->sprites.nb_6_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_6_hover.xpm", &x, &x);
	struc->sprites.nb_7_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_7_hover.xpm", &x, &x);
	struc->sprites.nb_8_hover = mlx_xpm_file_to_image(struc->window.mlx_ptr,
			"images/nb_8_hover.xpm", &x, &x);

}
