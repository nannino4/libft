/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 10:21:30 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/15 14:48:02 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	if (ft_strlen(s) <= start || start < 0)
	{
		ft_strlcpy(str, s, 1);
		return (str);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
