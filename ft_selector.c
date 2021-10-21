/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:59 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/21 22:58:19 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_csdi(va_list ap, char o)
{
	int	sum;

	if (o == 'c')
		sum = ft_putchar((char)va_arg(ap, int));
	if (o == 's')
		sum = ft_putstr(va_arg(ap, char *));
	if (o == 'd' || o == 'i')
		sum = ft_putnbr(va_arg(ap, int));
	if (o == '%')
		sum = ft_putchar('%');
	return (sum);
}

int	ft_selector(va_list ap, char o)
{	
	int	sum;
	int	i;
	int	type;

	if (o == 'c' || o == 's' || o == 'd' || o == '%' || o == 'i')
		sum = ft_csdi(ap, o);
	if (o == 'u')
	{
		type = 0;
		i = va_arg(ap, int);
		if (i < 0)
			type = 1;
		sum = ft_unsigned_putnbr((unsigned int)i, type);
	}	
	if (o == 'x' || o == 'X')
	{
		if (o == 'x')
			type = 0;
		else
			type = 1;
		sum = ft_what_is_x(va_arg(ap, unsigned int), type);
	}
	if (o == 'p')
		sum = ft_hep(va_arg(ap, void *));
	return (sum);
}
