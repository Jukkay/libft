/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:49 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/15 17:09:09 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_next_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	ft_count_chunks(char const *s, char c)
{
	int		size;
	int		len;

	size = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
		{
			s++;
		}
		len = ft_find_next_char(s, c);
		if (len)
		{
			size++;
			s += len;
		}
		else
		{
			if (*s != '\0')
				s++;
		}
	}
	return (size);
}

static void	ft_process_str(char **arr, char const *s, char c)
{
	char	*str;
	int		len;

	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
		{
			s++;
		}
		len = ft_find_next_char(s, c);
		if (len)
		{	
			str = ft_strsub(s, 0, len);
			*arr = str;
			arr++;
			s += len;
		}
		else
		{
			if (*s != '\0')
				s++;
		}
	}
	*arr = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		arrsize;
	int		i;

	if (!s || !c)
		return (0);
	arrsize = ft_count_chunks(s, c);
	arr = (char **)malloc((arrsize + 1) * sizeof(char *));
	if (!arr)
		return (0);
	ft_process_str(arr, s, c);
	i = 0;
	while (arr[i] != NULL)
	{
		i++;
	}
	return (arr);
}
