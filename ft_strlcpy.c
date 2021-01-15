/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:27:18 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 18:08:20 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;

	i = 0;
	while (src[i] != 0)
	{
		if (i + 1 < size)
			dst[i] = src[i];
		if (i + 1 == size)
			dst[i] = 0;
		i++;
	}
	if (i + 1 <= size)
		dst[i] = 0;
	return (i);
}
