/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:26:03 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 16:55:17 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	if (!haystack || !needle)
		return (0);
	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while ((int)i <= (int)(len - ft_strlen(needle)) && haystack[i])
	{
		if (!ft_strncmp((haystack + i), needle, ft_strlen(needle)))
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
