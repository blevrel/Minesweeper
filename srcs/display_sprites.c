/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sprites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:34:04 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/18 15:53:26 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "demineur.h"

void	display_tiles(t_all *struc)
{
	struc->position.y = 0;
	while (struc->position.y < HEIGHT)
	{
		struc->position.x = 0;
		while (struc->position.x < WIDTH)
		{
			mlx_put_image_to_window(struc->window.mlx_ptr, struc->window.win_ptr,
				struc->sprites.tile, struc->position.x * PIX,
				struc->position.y * PIX);
			struc->position.x++;
		}
		struc->position.y++;
	}
}
