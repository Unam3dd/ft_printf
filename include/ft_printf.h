/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student.42.angouleme.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:58:26 by stales            #+#    #+#             */
/*   Updated: 2022/04/19 18:02:31 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char const *str, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbu_fd(unsigned int n, int fd);
int	ft_putstr_fd(char const *s, int fd);
int	ft_putstr_fd_end(char *s, int fd, char end);
int	ft_puthex_fd(unsigned long n, int fd, char fmt);
int	ft_va(char *fmt, va_list *a);
int	ft_printf(const char *format, ...);

#endif