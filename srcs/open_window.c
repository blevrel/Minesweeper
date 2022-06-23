/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:47:44 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/23 17:13:18 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

char	*open_window(t_all *struc)
{
	struc->window.height = WINHEIGHT;
	struc->window.width = WINWIDTH;
	struc->window.win_ptr = mlx_new_window(struc->window.mlx_ptr,
		struc->window.width, struc->window.height, "Minesweeper");
	display_init_tiles(struc);
	return (struc->window.win_ptr);
}

char	**put_z_borders()
{
	char	**mat;
	int		j = 0;
	int		i;

	mat = ft_calloc(HEIGHT + 1, sizeof(char*));
	while (j < HEIGHT)
	{
		i = 0;
		mat[j] = ft_calloc(WIDTH + 1, sizeof(char));
		while (i < WIDTH)
		{
			if (i == 0 || i == WIDTH - 1 || j == 0 || j == HEIGHT - 1)
				mat[j][i] = 'Z';
			else
				mat[j][i] = '0';
			i++;
		}
		j++;
	}
	return (mat);
}

char	**fill_random_matrix()
{
	char			**mat;
	int				number;
	int				i;
	int				j = 0;
	int				bombs = 0;
	int				trigger = 1;

	mat = put_z_borders();
	srand(time(NULL));
	while (bombs < 40)
	{
		i = 0;
		while (i < WIDTH)
		{
			number = rand() % 10;
			if (number == 0 && bombs < 40 && mat[j][i] != 'B' && mat[j][i] != 'Z')
			{
				bombs++;
				mat[j][i] = 'B';
			}
			else if (mat[j][i] == 0)
				mat[j][i] = '0';
			i++;
		}
		if (j == HEIGHT - 1)
		{
			j = -1;
			trigger = 0;
		}
		j++;
	}
	return (mat);
}

int	main(int argc, char **argv)
{
	t_all	struc;

	if (argc != 1)
		return (0);
	struc.window.mlx_ptr = mlx_init();
	struc.matrix = fill_random_matrix();
	struc.finished_mat = gen_finished_mat(&struc);
	load_images(&struc);
	struc.window.win_ptr = open_window(&struc);
	event_manager(&struc);
	mlx_loop(struc.window.mlx_ptr);
}
