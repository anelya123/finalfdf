/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:34:47 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:34:49 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d >= s && d)
	{
		d += (len - 1);
		s += (len - 1);
		while (len--)
			ft_copybyte(d--, s--);
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
