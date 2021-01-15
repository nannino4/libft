/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:31:40 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/15 14:42:52 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *str, char c)
{
	int		words;
	int		flag;
	int		i;

	words = 0;
	flag = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (flag == 0)
				words++;
			flag = 1;
		}
		else
			flag = 0;
		i++;
	}
	return (words);
}

static void		assign_len(int *len, char const *str, char c)
{
	int		i;
	int		j;
	int		flag;

	flag = 0;
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len[j]++;
			flag = 1;
		}
		else
		{
			if (flag == 1)
				j++;
			flag = 0;
		}
		i++;
	}
}

static void		fill_arr(char **arr, char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	int		flag;

	flag = 0;
	j = 0;
	k = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != c)
		{
			arr[j][k++] = str[i];
			flag = 1;
		}
		else
		{
			if (flag-- == 1)
			{
				arr[j++][k] = 0;
				k = 0;
			}
		}
	}
}

char			**ft_split(char const *str, char c)
{
	char	**arr;
	int		i;
	int		*len;

	if (!(arr = malloc((count_words(str, c) + 1) * sizeof(char *))))
		return (0);
	arr[count_words(str, c)] = 0;
	if (!(len = malloc(count_words(str, c) * sizeof(int))))
		return (0);
	i = 0;
	while (i < count_words(str, c))
		len[i++] = 0;
	assign_len(len, str, c);
	i = 0;
	while (i < count_words(str, c))
	{
		if (!(arr[i] = malloc((len[i] + 1) * sizeof(char))))
			return (0);
		arr[i][len[i]] = 0;
		i++;
	}
	fill_arr(arr, str, c);
	free(len);
	return (arr);
}
