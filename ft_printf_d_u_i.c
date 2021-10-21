/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_u_i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:36 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/21 22:45:59 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digit_strlen(int n)
{
	int	k;

	k = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		k++;
	}
	if (n < 0)
		k++;
	return (k);
}

int	ft_putnbr(int n)
{
	int	i;

	i = digit_strlen(n);
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
	return (i);
}

int	ft_unsigned_putnbr(unsigned int n, int type)
{
	int	i;

	if (type)
		i = 10;
	else
		i = digit_strlen(n);
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (i);
}
