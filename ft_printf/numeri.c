/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:16:00 by mpicheca          #+#    #+#             */
/*   Updated: 2024/01/07 17:11:45 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (len += write(1, "-2147483648", 11));
	else if (n == 0)
		return (write(1, "0", 1));
	else
	{
		if (n < 0)
		{
			len += write(1, "-", 1);
			n = n * -1;
		}
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
	return (len + howlong_int(n));
}

int	ft_put_unsigned(unsigned int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	else if (n > 9)
		ft_put_unsigned(n / 10);
	ft_putchar((n % 10) + 48);
	return (howlong_u(n));
}

int	ft_put_hexa(unsigned int n, char c)
{
	if (n == 0)
		return (write(1, "0", 1));
	else if (n >= 16)
	{
		ft_put_hexa((n / 16), c);
		ft_put_hexa((n % 16), c);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + 48);
		else
		{
			if (c == 'x')
				ft_putchar((n - 10) + 'a');
			else if (c == 'X')
				ft_putchar((n - 10) + 'A');
		}
	}
	return (howlong_hexa(n));
}
