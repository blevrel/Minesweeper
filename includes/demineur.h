/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demineur.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:53:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/18 15:56:39 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DEMINEUR_H
# define DEMINEUR_H
# include "libft.h"
# include "mlx.h"
# include "mlx_int.h"
# include "structure.h"
# include <time.h>
# define WINHEIGHT 237
# define WINWIDTH 305
# define HEIGHT 14
# define WIDTH 18
# define PIX 17

char	*open_window(t_all *struc);
char	**fill_random_matrix();
void	load_images(t_all *struc);
void	display_tiles(t_all *struc);

# endif
