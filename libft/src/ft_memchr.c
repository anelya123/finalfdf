/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:31:51 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 20:31:53 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	if (!n)
		return (NULL);
	str = (unsigned char *)s;
	while (--n && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char)c)
		return (str);
	return (NULL);
}
