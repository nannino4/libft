/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:43:38 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 17:52:12 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		n_len(int n)
{
	int		cifre;

	cifre = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		cifre++;
		n /= 10;
	}
	return (cifre);
}

char			*ft_itoa(int n)
{
	int			cifre;
	char		*s;
	long int	long_n;

	cifre = n_len(n);
	if (n < 0)
	{
		long_n = -(long int)n;
		cifre++;
	}
	else
		long_n = n;
	if (!(s = (char *)malloc(cifre + 1)))
		return (0);
	s[cifre] = 0;
	if (n < 0)
		s[0] = '-';
	s[--cifre] = (long_n % 10) + '0';
	while (long_n /= 10)
		s[--cifre] = (long_n % 10) + '0';
	return (s);
}
