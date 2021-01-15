/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:18:59 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/15 10:19:01 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*tmp;

	counter = 0;
	tmp = lst;
	while (tmp)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}
