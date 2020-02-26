/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:33:54 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:33:56 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *memory;

	if (!(memory = (unsigned char *)malloc(size)))
		return (NULL);
	else
		ft_bzero(memory, size);
	return (memory);
}
