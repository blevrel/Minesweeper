/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:47:44 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/18 15:41:57 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "demineur.h"

char	*open_window(t_all *struc)
{
	struc->window.height = WINHEIGHT;
	struc->window.width = WINWIDTH;
	struc->window.win_ptr = mlx_new_window(struc->window.mlx_ptr,
		struc->window.width, struc->window.height, "Demineur");
	display_tiles(struc);
	return (struc->window.win_ptr);
}

char	**fill_random_matrix()
{
	char			**mat;
	int				number;
	int				i = 0;
	int				j;
	int				bombs = 0;
	int				trigger = 1;

	mat = ft_calloc(HEIGHT + 1, sizeof(char**));
	srand(time(NULL));
	while (bombs < 40)
	{
		j = 0;
		if (trigger == 1)
			mat[i] = ft_calloc(WIDTH + 1, sizeof(char));
		while (j < WIDTH)
		{
			number = rand() % 10;
			if (number == 0 && bombs < 40 && mat[i][j] != '0')
			{
				bombs++;
				mat[i][j] = '0';
			}
			else if (mat[i][j] == 0)
				mat[i][j] = '1';
			j++;
		}
		if (i == HEIGHT)
		{
			i = -1;
			trigger = 0;
		}
		i++;
	}
	return (mat);
}

int	main(int argc, char **argv)
{
	t_all	struc;
	char	**matrix;

	if (argc != 1)
		return (0);
	struc.window.mlx_ptr = mlx_init();
	matrix = fill_random_matrix();
	load_images(&struc);
	struc.window.win_ptr = open_window(&struc);
	mlx_loop(struc.window.mlx_ptr);
}
