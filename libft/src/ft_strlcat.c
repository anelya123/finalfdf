/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:41:20 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:41:21 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t srclen;
	size_t buffer;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, size);
	buffer = size - dstlen;
	if (dstlen == size)
		return (dstlen + srclen);
	if (srclen < buffer)
		ft_memcpy(dst + dstlen, src, (srclen + 1));
	if (srclen >= buffer)
	{
		ft_memcpy(dst + dstlen, src, buffer - 1);
		dst[dstlen + buffer - 1] = '\0';
	}
	return (dstlen + srclen);
}
