/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjada <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:25:34 by mjada             #+#    #+#             */
/*   Updated: 2020/02/26 19:25:37 by mjada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *str, char c)
{
	size_t	word;
	size_t	i;
	size_t	test;

	i = 0;
	word = 0;
	test = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (test == 1 && str[i] == c)
			test = 0;
		if (test == 0 && str[i] != c)
		{
			test = 1;
			word++;
		}
		i++;
	}
	return (word);
}
