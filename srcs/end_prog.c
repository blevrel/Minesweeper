/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_prog.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:29:47 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/28 10:24:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	end_prog(t_all *struc)
{
	int	i;

	i = 0;
	if (struc->window.win_ptr != NULL)
		mlx_destroy_window(struc->window.mlx_ptr, struc->window.win_ptr);
	if (struc->sprites.tile != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.tile);
	if (struc->sprites.tile_hover != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.tile_hover);
	if (struc->sprites.clicked_tile != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.clicked_tile);
	if (struc->sprites.flag != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.flag);
	if (struc->sprites.flag_hover != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.flag_hover);
	if (struc->sprites.nb_1 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_1);
	if (struc->sprites.nb_2 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_2);
	if (struc->sprites.nb_3 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_3);
	if (struc->sprites.nb_4 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_4);
	if (struc->sprites.nb_5 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_5);
	if (struc->sprites.nb_6 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_6);
	if (struc->sprites.nb_7 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_7);
	if (struc->sprites.nb_8 != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.nb_8);
	if (struc->sprites.border != NULL)
		mlx_destroy_image(struc->window.mlx_ptr, struc->sprites.border);
	if (struc->matrix)
	{
		while (struc->matrix[i])
		{
			free(struc->matrix[i]);
			i++;
		}
		free(struc->matrix);
	}
	i = 0;
	if (struc->finished_mat)
	{
		while (struc->finished_mat[i])
		{
			free(struc->finished_mat[i]);
			i++;
		}
		free(struc->finished_mat);
	}
	destroy_mlx_ptr(struc);
	exit(1);
}
void	destroy_mlx_ptr(t_all *struc)
{
	mlx_loop_end(struc->window.mlx_ptr);
	mlx_destroy_display(struc->window.mlx_ptr);
	free(struc->window.mlx_ptr);
}
