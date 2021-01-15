/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:34:19 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/13 17:58:50 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long int		long_n;

	if (n < 0)
	{
		long_n = -(long int)n;
		write(fd, "-", 1);
	}
	else
		long_n = n;
	if (long_n > 9)
	{
		ft_putnbr_fd(long_n / 10, fd);
		ft_putchar_fd((long_n % 10) + '0', fd);
	}
	else
		ft_putchar_fd(long_n + '0', fd);
}
