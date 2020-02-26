/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:43:26 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:43:27 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hay;
	size_t		need_length;

	hay = haystack;
	need_length = ft_strlen(needle);
	if (!need_length)
		return ((char *)hay);
	while (len && *hay)
	{
		if (len >= need_length)
			if (!ft_strncmp(hay, needle, need_length))
				return ((char *)hay);
		len--;
		hay++;
	}
	return (NULL);
}
