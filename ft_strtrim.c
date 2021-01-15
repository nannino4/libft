/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:16:25 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 17:54:32 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*inizio;
	char	*fine;
	size_t	len;

	inizio = (char *)s1;
	fine = inizio + ft_strlen(s1);
	while (*inizio && check_set(*inizio, set))
		inizio++;
	while (inizio < fine && check_set(*(fine - 1), set))
		fine--;
	len = fine - inizio + 1;
	if (!(s = malloc(len)))
		return (0);
	ft_strlcpy(s, inizio, len);
	return (s);
}
