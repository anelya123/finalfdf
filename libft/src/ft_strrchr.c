/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:43:41 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:43:43 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		*str;

	len = ft_strlen(s);
	str = (char *)s + len - 1;
	if (c == 0)
		return ((char *)s + len);
	while (len--)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
