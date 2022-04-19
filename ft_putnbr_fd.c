/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:14:03 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 20:26:41 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n > 2147483647)
		return (0);
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd, 0));
	if (n < 0)
	{
		i += ft_putchar_fd('-', fd);
		n = ~(n - 1);
	}
	if (n >= 10)
		i += ft_putnbr_fd(n / 10, fd);
	i += ft_putchar_fd((n % 10) + '0', fd);
	return (i);
}
