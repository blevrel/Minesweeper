/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:28:08 by blevrel           #+#    #+#             */
/*   Updated: 2022/06/24 14:17:52 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minesweeper.h"

int	close_win_cross(t_all *struc)
{
	end_prog(struc, 0);
	return (0);
}

int	keypress(int keycode, t_all *struc)
{
	if (keycode == XK_Escape)
		end_prog(struc, 0);
	return (0);
}

int	mouse_move(int x, int y, t_all *struc)
{
	struc->mouse_pos.x = x / PIX;
	struc->mouse_pos.y = y / PIX;
	display_correct_sprite(struc, 0);
}

int	mouse_click(int	button, int x, int y, t_all *struc)
{
	struc->mouse_pos.x = x / PIX;
	struc->mouse_pos.y = y / PIX;
	struc->mouse_pos.button = button;
	display_correct_sprite(struc, 1);
}

void	event_manager(t_all *struc)
{
	mlx_hook(struc->window.win_ptr, DestroyNotify, StructureNotifyMask,
		close_win_cross, struc);
	mlx_hook(struc->window.win_ptr, KeyPress, KeyPressMask,
		keypress, struc);
	mlx_hook(struc->window.win_ptr, MotionNotify, PointerMotionMask,
		mouse_move, struc);
	mlx_hook(struc->window.win_ptr, ButtonPress, ButtonPressMask,
		mouse_click, struc);
}

