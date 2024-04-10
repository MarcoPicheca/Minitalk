/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpicheca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:15:41 by mpicheca          #+#    #+#             */
/*   Updated: 2023/02/27 16:37:37 by mpicheca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convertitore(va_list arg, const char c)
{
	int	len;

	len = 0;
	if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(arg, int));
	else if (c == 'p')
		len += ft_putptr(va_arg(arg, unsigned long));
	else if (c == 'u')
		len += ft_put_unsigned(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_put_hexa(va_arg(arg, unsigned int), c);
	else if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	else
		return (len += write(1, &c, 1));
	return (len);
}

int	ft_printf(const char *c, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, c);
	while (c[i])
	{
		if (c[i] == '%')
			len += convertitore(arg, c[++i]);
		else
			len += write(1, &c[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
