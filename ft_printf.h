/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvixen <cvixen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:38:10 by cvixen            #+#    #+#             */
/*   Updated: 2021/10/20 19:07:53 by cvixen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_selector(va_list ap, char o);
int	ft_putchar(char k);
int	ft_putstr(char *s1);
int	digit_strlen(int n);
int	ft_putnbr(int n);
int	is_it(char c);
int	ft_unsigned_putnbr(int n);
int	ft_hex(unsigned int i);
int	ft_heX(unsigned int k);
int	ft_hep(void *a);

#endif 
