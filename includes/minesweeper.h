/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minesweeper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:53:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/19 14:41:36 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINESWEEPER_H
# define MINESWEEPER_H
# include "libft.h"
# include "mlx.h"
# include "mlx_int.h"
# include "structure.h"
# include <time.h>
# define WINHEIGHT 224
# define WINWIDTH 288
# define HEIGHT 14
# define WIDTH 18
# define PIX 16

char	*open_window(t_all *struc);
char	**fill_random_matrix();
void	load_images(t_all *struc);
void	display_tiles(t_all *struc);
int		close_win_cross(t_all *struc);
int		keypress(int keycode, t_all *struc);
void	event_manager(t_all *struc);
void	end_prog(t_all *struc);
void	destroy_mlx_ptr(t_all *struc);
void	display_correct_sprite(t_all *struc);
void	display_hovered_sprites(t_all *struc);

# endif
