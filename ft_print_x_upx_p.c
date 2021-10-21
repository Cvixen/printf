/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_upx_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:49 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/21 22:57:38 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(unsigned long int i)
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

static int	ft_uphex(unsigned long int k)
{
	int		sum;
	char	*c;

	c = "0123456789ABCDEF";
	if (k <= 0)
		return (0);
	sum = ft_uphex(k / 16);
	ft_putchar(c[k % 16]);
	return (sum + 1);
}

int	ft_what_is_x(unsigned int i, int type)
{
	if (i == 0)
		return (ft_putchar('0'));
	if (type)
		return (ft_uphex((unsigned long int)i));
	if (!type)
		return (ft_hex((unsigned long int)i));
	return (0);
}

static int	what_is_p(unsigned long int i)
{
	int		sum;
	char	*c;

	c = "0123456789abcdef";
	if (i <= 0)
		return (0);
	sum = what_is_p(i / 16);
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
	return (what_is_p((unsigned long int)a) + 2);
}
