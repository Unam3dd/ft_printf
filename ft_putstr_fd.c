/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/13 00:04:42 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <unistd.h>

int	ft_putstr_fd(char const *s, int fd)
{
	char	*tmp;

	if (!s || !fd)
		return (ft_putstr_fd("(null)", 1));
	tmp = (char *)s;
	while (*tmp)
		tmp++;
	return (write(fd, s, tmp - s));
}
