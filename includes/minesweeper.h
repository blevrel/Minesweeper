/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minesweeper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:53:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/26 12:27:38 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINESWEEPER_H
# define MINESWEEPER_H
# include "libft.h"
# include "mlx.h"
# include "mlx_int.h"
# include "structure.h"
# include <time.h>
# define WINHEIGHT 256
# define WINWIDTH 320
# define HEIGHT 16
# define WIDTH 20
# define PIX 16

char	*open_window(t_all *struc);
char	**fill_random_matrix();
void	load_images(t_all *struc);
void	display_init_tiles(t_all *struc);
int		close_win_cross(t_all *struc);
int		keypress(int keycode, t_all *struc);
void	event_manager(t_all *struc);
void	end_prog(t_all *struc, int trigger);
void	destroy_mlx_ptr(t_all *struc);
void	display_correct_sprite(t_all *struc, int trigger);
void	display_hovered_sprites(t_all *struc);
char	char_in_mat(t_all *struc, int x, int y);
char	**gen_finished_mat(t_all *struc);
void	*choose_sprite(t_all *struc);
void	*choose_hover_sprite(t_all *struc);
void	*choose_sprite_when_clicked(t_all *struc);
int		check_if_finished(t_all *struc);
void	winning_screen();
void	losing_screen();
int		keypress_ending(int keypress, t_all *struc);
int		close_end_win_cross(t_all *struc);
void	destroy_ending_screen(t_all *struc);
void	hooks(t_all *struc);

# endif
