/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:59:31 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 14:29:07 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	size_t		flag;

	flag = 0;
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		if (*(char *)(src + i) == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
