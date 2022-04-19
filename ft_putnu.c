/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:06:01 by stales            #+#    #+#             */
/*   Updated: 2022/04/13 11:31:23 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_putnbu_fd(unsigned int n, int fd)
{
	unsigned int	i;

	i = 0;
	if (n > UINT_MAX)
		return (0);
	if (n >= 10)
		i += ft_putnbu_fd(n / 10, fd);
	i += ft_putchar_fd((n % 10) + '0', fd);
	return (i);
}
