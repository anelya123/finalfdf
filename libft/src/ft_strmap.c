/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:41:42 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:41:43 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
				a[i] = f(s[i]);
				i++;
			}
		}
	}
	return (a);
}
