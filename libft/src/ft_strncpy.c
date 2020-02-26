/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:42:36 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:42:38 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t size;

	size = ft_strnlen(src, len);
	if (size < len)
		ft_memset(dst + size, '\0', len - size);
	return (ft_memcpy(dst, src, size));
}
