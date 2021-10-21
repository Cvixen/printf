/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:49 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/21 22:48:12 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_it(char c)
{
	return (c == '%' || c == 'c' || c == 's' || c == 'd' || c == 'i' \
	|| c == 'u' || c == 'p' || c == 'x' || c == 'X');
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		sum;

	i = -1;
	sum = 0;
	va_start(ap, s);
	while (s[++i])
	{
		if (s[i] == '%' && is_it(s[i + 1]))
		{
			sum += ft_selector(ap, s[i + 1]);
			i++;
		}
		else
		{
			write (1, &s[i], 1);
			sum++;
		}
	}
	va_end(ap);
	return (sum);
}
