/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntatori.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpicheca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:16:11 by mpicheca          #+#    #+#             */
/*   Updated: 2023/02/28 16:09:23 by mpicheca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_addr(unsigned long c)
{
	if (c >= 16)
	{
		print_addr(c / 16);
		print_addr(c % 16);
	}
	else
	{
		if (c <= 9)
			ft_putchar(c + 48);
		else
			ft_putchar(c - 10 + 'a');
	}
}

int	ft_putptr(unsigned long long c)
{
	int	len;

	len = 0;
	if (c == 0)
	{
		len += write(1, "(nil)", 5);
		return (len);
	}
	else
	{
		len += write(1, "0x", 2);
		print_addr(c);
	}
	return (len += howlong_ptr(c));
}
