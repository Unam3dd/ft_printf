/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:14:03 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 20:26:41 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n > 2147483647)
		return (0);
	if (n == -2147483648)
		return (ft_putstr("-2147483648", 0));
	if (n < 0)
	{
		i += ft_putchar('-');
		n = ~(n - 1);
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}