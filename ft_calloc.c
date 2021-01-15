/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:41 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/12 17:05:10 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((ptr = (void *)malloc(nmemb * size)) == 0)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
