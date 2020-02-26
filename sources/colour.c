/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colour.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:41:39 by vrhaena           #+#    #+#             */
/*   Updated: 2020/02/26 22:14:17 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		choose_colour(t_coord *p, float x1, float y1, t_fdf *data)
{
	p->z = data->value[(int)p->y][(int)p->x];
	p->z1 = data->value[(int)y1][(int)x1];
	if (p->z > 0 || p->z1 > 0)
		data->color = 0x0080ff;
	else
		data->color = 0xe80c0c;
}
