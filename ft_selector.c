/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:59 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/20 19:07:01 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(va_list ap, char o)
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
	if (o == 'u')
		sum = ft_unsigned_putnbr(va_arg(ap, int));
	if (o == 'x')
		sum = ft_hex(va_arg(ap, unsigned int));
	if (o == 'X')
		sum = ft_heX(va_arg(ap, unsigned int));
	if (o == 'p')
		sum = ft_hep(va_arg(ap, void *));
	return (sum);
}
