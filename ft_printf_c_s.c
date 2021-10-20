/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:37:42 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/20 17:58:07 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char k)
{
	write(1, &k, 1);
	return (1);
}

int	ft_putstr(char *s1)
{
	int	i;
	int	sum;

	sum = 0;
	i = -1;
	if (s1 == NULL)
		s1 = "(null)";
	while (s1[++i])
		sum += ft_putchar(s1[i]);
	return (sum);
}
