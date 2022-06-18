/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:55:24 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/18 15:35:25 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRUCTURE_H
# define STRUCTURE_H
# include "demineur.h"

typedef struct s_window
{
	int		width;
	int		height;
	void	*win_ptr;
	void	*mlx_ptr;
}				t_window;

typedef struct s_sprites
{
	void	*tile;
	void	*clicked_tile;
	void	*flag;
	void	*nb_1;
	void	*nb_2;
	void	*nb_3;
	void	*nb_4;
	void	*nb_5;
	void	*nb_6;
	void	*nb_7;
	void	*nb_8;
}				t_sprites;

typedef struct s_position
{
	int	y;
	int	x;
}				t_position;

typedef struct s_all
{
	t_window	window;
	t_sprites	sprites;
	t_position	position;
}				t_all;
# endif
