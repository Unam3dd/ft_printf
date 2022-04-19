/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:08:45 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 20:25:11 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int	ft_va(char *fmt, va_list a)
{
	unsigned long	addr;

	if (*fmt == 'c')
		return (ft_putchar_fd((char)va_arg(a, int), 1));
	if (*fmt == 's')
		return (ft_putstr_fd(va_arg(a, char *), 1, 0));
	if (*fmt == 'd' || *fmt == 'i')
		return (ft_putnbr_fd(va_arg(a, int), 1));
	if (*fmt == 'u')
		return (ft_putnbu_fd(va_arg(a, unsigned int), 1));
	if (*fmt == 'x' || *fmt == 'X')
		return (ft_puthex_fd(va_arg(a, unsigned int), 1, *fmt));
	if (*fmt == '%')
		return (ft_putchar_fd('%', 1));
	if (*fmt == 'p')
	{
		addr = va_arg(a, unsigned long);
		if (addr)
			return (ft_putstr_fd("0x", 1, 0) + ft_puthex_fd(addr, 1, *fmt));
		return (ft_putstr_fd("(nil)", 1, 0));
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*save;
	int		i;

	va_start(args, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i += ft_va((char *)++format, args);
			format++;
			continue ;
		}
		save = (char *)format;
		format += ft_putstr_fd((char *)format, 1, '%');
		i += format - save;
	}
	va_end(args);
	return (i);
}
