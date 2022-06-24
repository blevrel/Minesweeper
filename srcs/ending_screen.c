/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ending_screen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:18:49 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/24 15:31:59 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

void	winning_screen()
{
	void	*mlx_ptr;
	void	*mlx_win;
	void	*image;
	int		x;

	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 1920, 1080, ":)");
	image = mlx_xpm_file_to_image(mlx_ptr, "images/screen_win.xpm", &x, &x);
	mlx_put_image_to_window(mlx_ptr, mlx_win, image, 0, 0);
	mlx_loop(mlx_ptr);
}

void	losing_screen()
{
	void	*mlx_ptr;
	void	*mlx_win;
	void	*image;
	int		x;

	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 1920, 1080, ":(");
	image = mlx_xpm_file_to_image(mlx_ptr, "images/screen_lose.xpm", &x, &x);
	mlx_put_image_to_window(mlx_ptr, mlx_win, image, 0, 0);
	mlx_loop(mlx_ptr);

}
