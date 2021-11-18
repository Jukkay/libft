/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:50:03 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/18 11:45:38 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_int_to_str(int n, char *s, int i)
{
	int		divider;
	int		temp;

	divider = ft_power(10, ft_intlen(n)) / 10;
	while (divider)
	{
		temp = n / divider;
		n %= divider;
		divider /= 10;
		s[i] = temp + '0';
		i++;
	}
	s[i] = '\0';
}

static void	ft_itoa_negatives(int n, char *s, int i)
{
	if (n == -2147483648)
	{
		s[i++] = '-';
		s[i++] = '2';
		n = 147483648;
		ft_int_to_str(n, s, i);
	}
	else
	{
		s[i++] = '-';
		n *= (-1);
		ft_int_to_str(n, s, i);
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	size_t	len;

	i = 0;
	len = ft_intlen(n);
	if (n == 0)
		return (ft_strsub("0", 0, 1));
	if (n < 0)
	{
		s = (char *)malloc(sizeof(char) * len + 2);
		if (!s)
			return (NULL);
		ft_itoa_negatives(n, s, i);
	}
	else
	{
		s = (char *)malloc(sizeof(char) * len + 1);
		if (!s)
			return (NULL);
		ft_int_to_str(n, s, i);
	}
	return (s);
}
