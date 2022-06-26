/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ending_screen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:18:49 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/26 12:36:13 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	winning_screen(t_all *struc)
{
	void	*image;
	int		x;

	struc->window.mlx_ptr = mlx_init();
	struc->window.win_ptr = mlx_new_window(struc->window.mlx_ptr, 1920, 1080, ":)");
	image = mlx_xpm_file_to_image(struc->window.mlx_ptr, "images/screen_win.xpm", &x, &x);
	mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr, image, 0, 0);
	hooks(struc);
	mlx_loop(struc->window.mlx_ptr);
}

void	losing_screen(t_all *struc)
{
	void	*image;
	int		x;

	struc->window.mlx_ptr = mlx_init();
	struc->window.win_ptr = mlx_new_window(struc->window.mlx_ptr, 1920, 1080, ":(");
	image = mlx_xpm_file_to_image(struc->window.mlx_ptr, "images/screen_lose.xpm", &x, &x);
	mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr, image, 0, 0);
	hooks(struc);
	mlx_loop(struc->window.mlx_ptr);
}

int	keypress_ending(int keypress, t_all *struc)
{
	(void)keypress;
	destroy_ending_screen(struc);
}

int	close_end_win_cross(t_all *struc)
{
	destroy_ending_screen(struc);
}

void	destroy_ending_screen(t_all *struc)
{
	mlx_loop_end(struc->window.mlx_ptr);
	mlx_destroy_display(struc->window.mlx_ptr);
	free(struc->window.mlx_ptr);
}

void	hooks(t_all *struc)
{
	mlx_hook(struc->window.win_ptr, DestroyNotify, StructureNotifyMask, close_end_win_cross, struc->window.mlx_ptr);
	mlx_hook(struc->window.win_ptr, KeyPress, KeyPressMask, keypress_ending, struc->window.mlx_ptr);
}
