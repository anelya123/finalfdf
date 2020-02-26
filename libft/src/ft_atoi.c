/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:24:44 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:24:46 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *c)
{
	long long	number;
	long long	prev;
	signed char	sign;

	sign = 1;
	number = 0;
	while (*c == 32 || (*c >= 9 && *c <= 13))
		c++;
	if (*c == '-')
	{
		sign = -1;
		c++;
	}
	else if (*c == '+')
		c++;
	while (*c >= '0' && *c <= '9')
	{
		prev = number;
		number = number * 10 + *c - '0';
		c++;
		if (number / 10 != prev)
			return (sign > 0 ? -1 : 0);
	}
	return ((int)(number * sign));
}
