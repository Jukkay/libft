/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:07:18 by jylimaul          #+#    #+#             */
/*   Updated: 2021/11/18 13:30:29 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int_to_char(int n, int fd)
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
		ft_putchar_fd(print_ch, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			n = 147483648;
			int_to_char(n, fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			n *= (-1);
			if (n < 10)
				ft_putchar_fd(n + '0', fd);
			else
				int_to_char(n, fd);
		}
	}
	else if (n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
		int_to_char(n, fd);
}
