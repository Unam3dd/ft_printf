/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:51:49 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 20:56:11 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

const char charset[] = "cspdiuxX%";

const void *addr_tab[] =
{
	ft_putchar_fd,
	ft_putstr_fd,
	ft_puthex_fd,
	ft_putnbr_fd,
	ft_putnbr_fd,
	ft_putnbu_fd,
	ft_puthex_fd,
	ft_puthex_fd,
	ft_putchar_fd
};