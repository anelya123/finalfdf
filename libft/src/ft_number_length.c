/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:35:18 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:35:19 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_number_length(intmax_t number)
{
	int length;

	length = 1;
	while ((number /= 10) > 0)
		length++;
	return (length);
}
