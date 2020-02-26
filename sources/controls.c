/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 22:19:12 by vrhaena           #+#    #+#             */
/*   Updated: 2020/02/26 22:14:39 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		close_win(void *param)
{
	(void)param;
	exit(0);
}

/*
**	We can close window with button "ESC" on our keyboard
**	We can choose projection with buttons:
**		"Z" for isometric (3D)
**		"X" for parallel (2D)
*/

int		key_release(int key, t_fdf *data)
{
	if (key == 53)
		close_win(data);
	if (key == 6 || key == 7)
		choose_projection(key, data);
	return (0);
}

/*
**	We can zoom with buttons "Q" for "+" and "E" for "-"
**	We can shift with buttons:
**		"W" for up and "S" for down
**		"A" for left and "D" for right
*/

int		key_press(int key, t_fdf *data)
{
	if (key == 13 || key == 1 || key == 0 || key == 2)
		key_shift(key, data);
	if (key == 12 || key == 14)
		key_zoom(key, data);
	return (0);
}

void	setup_controls(t_fdf *data)
{
	mlx_hook(data->win_ptr, 2, 0, key_press, data);
	mlx_hook(data->win_ptr, 17, 0, close_win, data);
	mlx_hook(data->win_ptr, 3, 0, key_release, data);
}
