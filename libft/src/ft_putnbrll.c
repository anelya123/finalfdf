/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:37:25 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:37:27 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrll(__int64_t n)
{
	if (n > LLONG_MAX || n < LLONG_MIN)
		return ;
	if (n == LLONG_MIN)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	ft_putnbrll(n / 10);
	ft_putchar((char)((n % 10) + '0'));
}
