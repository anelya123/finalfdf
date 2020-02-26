/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:42:15 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:42:16 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t s1len;

	s1len = ft_strlen(s1);
	if (ft_strlen(s2) < n)
		ft_strcpy(s1 + s1len, s2);
	else
	{
		ft_strncpy(s1 + s1len, s2, n);
		s1[s1len + n] = '\0';
	}
	return (s1);
}
