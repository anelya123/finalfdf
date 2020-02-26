/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:45:01 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:45:04 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t len;
	size_t i;

	i = 0;
	len = 0;
	if (s)
		if ((len = ft_strlen(s)))
		{
			while ((ft_isblanki(s, i)))
				i++;
			while (ft_isblanki(s, len - 1) && (i < len))
				len--;
			return (ft_strsub(s, i, len - i));
		}
	return ((char *)s);
}
