/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:10:13 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 11:15:59 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	size_t		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(s = malloc(len)))
		return (0);
	ft_strlcpy(s, s1, len);
	ft_strlcat(s, s2, len);
	return (s);
}
