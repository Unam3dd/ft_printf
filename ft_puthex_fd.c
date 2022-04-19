/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:59:34 by stales            #+#    #+#             */
/*   Updated: 2022/04/13 11:31:41 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long n, int fd, char fmt)
{
	static unsigned int	size;
	unsigned int		nib;
	unsigned int		flag;

	nib = 0;
	size = 0;
	flag = 0;
	if (fmt == 'X')
		flag = 0x20;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (n > 0xF)
		ft_puthex_fd(n >> 0x4, fd, fmt);
	nib = (n & 0xF);
	if (nib >= 10)
		size += ft_putchar_fd(((nib - 10) + 'a') ^ flag, 1);
	if (nib < 10)
		size += ft_putchar_fd((nib + '0'), 1);
	return (size);
}
