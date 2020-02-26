/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_and_shift.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:45:57 by vrhaena           #+#    #+#             */
/*   Updated: 2020/02/26 22:14:56 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	key_shift(int key, t_fdf *data)
{
	if (key == 13)
		data->shift_y -= 10;
	if (key == 1)
		data->shift_y += 10;
	if (key == 0)
		data->shift_x -= 10;
	if (key == 2)
		data->shift_x += 10;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	draw(data);
}

void	shift(t_coord *p, float *x1, float *y1, t_fdf *data)
{
	p->x += data->shift_x;
	p->y += data->shift_y;
	*x1 += data->shift_x;
	*y1 += data->shift_y;
}

/*
**	key = 12 -> Q (that means +)
**	key = 14 -> E (that means -)
*/

void	key_zoom(int key, t_fdf *data)
{
	if (key == 12)
		data->zoom += 1;
	if (key == 14)
		data->zoom -= 1;
	if (data->zoom < 1)
		data->zoom = 1;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	draw(data);
}

void	zoom(t_coord *ptr, float *x1, float *y1, t_fdf *data)
{
	ptr->x *= data->zoom;
	ptr->y *= data->zoom;
	*x1 *= data->zoom;
	*y1 *= data->zoom;
}
