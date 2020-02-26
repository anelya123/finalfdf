/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:41:57 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:41:59 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	size_t	len;
	size_t	i;

	a = 0;
	if (s)
	{
		len = ft_strlen(s);
		a = ft_memalloc(len + 1);
		i = 0;
		if (len && a)
		{
			while (i < len)
			{
				a[i] = f(i, s[i]);
				i++;
			}
		}
	}
	return (a);
}
