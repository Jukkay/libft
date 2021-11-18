/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:29:50 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/15 11:04:52 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_ret	ft_find_first_digit(const char *str, t_ret x)
{
	while (!(ft_isdigit(str[x.i])) && str[x.i] != '\0')
	{
		if (ft_iswhitespace(str[x.i]) && x.negpos == 0)
			x.i++;
		else if (str[x.i] == '-' || str[x.i] == '+')
		{
			if (x.negpos != 0)
				x.err = 1;
			if (str[x.i] == '+')
				x.negpos = 1;
			else
				x.negpos = -1;
			x.i++;
		}
		else
		{
			x.err = 1;
			x.i++;
		}
	}
	return (x);
}

int	ft_atoi(const char *str)
{
	unsigned long	temp;
	t_ret			x;

	x.i = 0;
	x.negpos = 0;
	x.err = 0;
	x = ft_find_first_digit(str, x);
	if (x.err)
		return (0);
	if (x.negpos == 0)
		x.negpos = 1;
	temp = 0;
	while (str[x.i] != '\0' && ft_isdigit(str[x.i]))
	{
		temp = temp * 10 + str[x.i] - '0';
		if (temp > 9223372036854775807 && x.negpos != -1)
			return (-1);
		else if (temp > 9223372036854775807 && x.negpos == -1)
			return (0);
		x.i++;
	}
	return (temp * x.negpos);
}
