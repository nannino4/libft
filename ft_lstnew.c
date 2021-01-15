/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:17:32 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/15 10:18:24 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*ret;

	if (!(ret = (t_list *)malloc(sizeof(t_list))))
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
