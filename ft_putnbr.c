/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 06:38:24 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/01 11:13:06 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int_to_char(int n)
{
	int		divider;
	int		temp;
	char	print_ch;

	divider = ft_power(10, ft_intlen(n)) / 10;
	while (divider >= 1)
	{
		temp = n / divider;
		n %= divider;
		divider /= 10;
		print_ch = temp + '0';
		ft_putchar(print_ch);
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			n = 147483648;
			int_to_char(n);
		}
		else
		{
			ft_putchar('-');
			n *= (-1);
			if (n < 10)
				ft_putchar(n + '0');
			else
				int_to_char(n);
		}
	}
	else if (n <= 9)
		ft_putchar(n + '0');
	else
		int_to_char(n);
}
