/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copybyte.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:25:20 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:25:22 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_copybyte(void *dst, const void *src)
{
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	if (!destination && !source)
		return (NULL);
	*destination = *source;
	return (dst);
}
