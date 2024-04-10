/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpicheca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:15:32 by mpicheca          #+#    #+#             */
/*   Updated: 2023/02/28 15:56:07 by mpicheca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>

int	ft_printf(const char *c, ...);
int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_putnbr(int c);
int	ft_putptr(unsigned long long c);
int	ft_put_unsigned(unsigned int c);
int	ft_put_hexa(unsigned int n, char c);
int	convertitore(va_list arg, const char c);
int	howlong_ptr(unsigned long long c);
int	howlong_int(int n);
int	howlong_u(unsigned int n);
int	howlong_hexa(unsigned int c);

#endif
