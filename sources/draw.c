/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 23:49:38 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 22:15:35 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		choose_projection(int key, t_fdf *data)
{
	if (key == 7)
		data->projection = 1;
	else if (key == 6)
		data->projection = 0;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	draw(data);
}

void		isometric(float *x, float *y, int z)
{
	double	angle;

	angle = 0.8;
	*x = (*x - *y) * cos(angle);
	*y = (*x + *y) * sin(angle) - z;
}

void		count_step(t_coord *p, float *x1, float *y1)
{
	int		max;

	p->x_step = *x1 - p->x;
	p->y_step = *y1 - p->y;
	max = MAX(ABS(p->x_step), ABS(p->y_step));
	p->x_step /= max;
	p->y_step /= max;
}

void		draw_line(t_coord *p, float x1, float y1, t_fdf *data)
{
	float	tmp_x;
	float	tmp_y;

	tmp_x = p->x;
	tmp_y = p->y;
	choose_colour(p, x1, y1, data);
	zoom(p, &x1, &y1, data);
	if (data->projection == 0)
	{
		isometric(&(p->x), &(p->y), p->z);
		isometric(&x1, &y1, p->z1);
	}
	shift(p, &x1, &y1, data);
	count_step(p, &x1, &y1);
	while ((int)(p->x - x1) || (int)(p->y - y1))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, p->x, p->y, data->color);
		p->x += p->x_step;
		p->y += p->y_step;
	}
	p->x = tmp_x;
	p->y = tmp_y;
}

void		draw(t_fdf *data)
{
	t_coord		*p;

	p = data->p;
	p->y = 0;
	while ((int)p->y < data->height)
	{
		p->x = 0;
		while ((int)p->x < data->width)
		{
			if ((int)p->x < data->width - 1)
				draw_line(p, p->x + 1, p->y, data);
			if ((int)p->y < data->height - 1)
				draw_line(p, p->x, p->y + 1, data);
			p->x++;
		}
		p->y++;
	}
	print_menu(data);
}
