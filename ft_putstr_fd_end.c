/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:58:57 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 18:03:08 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <unistd.h>

int	ft_putstr_fd_end(char *s, int fd, char end)
{
    char    *tmp;

    tmp = (char *)s;
    while (*tmp && *tmp != end)
        tmp++;
    return (write(fd, s, tmp - s));
}