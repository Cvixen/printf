/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_X_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:49 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/20 18:29:49 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int i)
{
	int		sum;
	char	*c;

	c = "0123456789abcdef";
	if (i <= 0)
		return (0);
	sum = ft_hex(i / 16);
	ft_putchar(c[i % 16]);
	return (sum + 1);
}

int	ft_heX(unsigned int k)
{
	int		sum;
	char	*c;

	c = "0123456789ABCDEF";
	if (k <= 0)
		return (0);
	sum = ft_heX(k / 16);
	ft_putchar(c[k % 16]);
	return (sum + 1);
}

int	XEX(unsigned long int i)
{
	int		sum;
	char	*c;

	c = "0123456789abcdef";
	if (i <= 0)
		return (0);
	sum = XEX(i / 16);
	ft_putchar(c[i % 16]);
	return (sum + 1);
}

int	ft_hep(void *a)
{	
	if (a == 0)
	{
		write (1, "0x0", 3);
		return (3);
	}
	write (1, "0x", 2);
	return (XEX((unsigned long int)a) + 2);
}
