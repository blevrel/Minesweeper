/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:55:24 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/22 18:50:53 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRUCTURE_H
# define STRUCTURE_H
# include "minesweeper.h"

typedef struct s_window
{
	int		width;
	int		height;
	void	*win_ptr;
	void	*mlx_ptr;
}				t_window;

typedef struct s_sprites
{
	void	*border;
	void	*tile;
	void	*tile_hover;
	void	*clicked_tile;
	void	*clicked_tile_hover;
	void	*flag;
	void	*flag_hover;
	void	*nb_1;
	void	*nb_1_hover;
	void	*nb_2;
	void	*nb_2_hover;
	void	*nb_3;
	void	*nb_3_hover;
	void	*nb_4;
	void	*nb_4_hover;
	void	*nb_5;
	void	*nb_5_hover;
	void	*nb_6;
	void	*nb_6_hover;
	void	*nb_7;
	void	*nb_7_hover;
	void	*nb_8;
	void	*nb_8_hover;
}				t_sprites;

typedef struct s_position
{
	int	y;
	int	x;
}				t_position;

typedef struct s_mouse_pos
{
	int	y;
	int	x;
}				t_mouse_pos;

typedef struct s_all
{
	char		**matrix;
	char		**finished_mat;
	t_window	window;
	t_sprites	sprites;
	t_position	position;
	t_mouse_pos	mouse_pos;
}				t_all;
# endif
