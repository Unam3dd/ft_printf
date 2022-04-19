/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 20:15:36 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <unistd.h>

int	ft_putstr_fd(char const *s, int fd, char end)
{
	char	*tmp;

	if (!s || !fd)
		return (ft_putstr_fd("(null)", 1, 0));
	tmp = (char *)s;
	while (*tmp && *tmp != end)
		tmp++;
	return (write(fd, s, tmp - s));
}
