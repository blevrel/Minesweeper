/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:28:08 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/19 14:44:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

int	close_win_cross(t_all *struc)
{
	end_prog(struc);
	return (0);
}

int	keypress(int keycode, t_all *struc)
{
	if (keycode == XK_Escape)
		end_prog(struc);
	return (0);
}

int	mouse_hook(int x, int y, t_all *struc)
{
	struc->mouse_pos.x = x / PIX;
	struc->mouse_pos.y = y / PIX;
	display_correct_sprite(struc);
}

void	event_manager(t_all *struc)
{
	mlx_hook(struc->window.win_ptr, DestroyNotify, StructureNotifyMask,
		close_win_cross, struc);
	mlx_hook(struc->window.win_ptr, KeyPress, KeyPressMask,
		keypress, struc);
	mlx_hook(struc->window.win_ptr, MotionNotify, PointerMotionMask, mouse_hook, struc);
}

