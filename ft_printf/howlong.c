/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   howlong.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpicheca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:39:45 by mpicheca          #+#    #+#             */
/*   Updated: 2023/02/28 15:53:17 by mpicheca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	howlong_int(int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	howlong_u(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	howlong_ptr(unsigned long long c)
{
	int	count;

	count = 0;
	while (c != 0)
	{
		count++;
		c /= 16;
	}
	return (count);
}

int	howlong_hexa(unsigned int c)
{
	int	count;

	count = 0;
	if (c == 0)
		return (1);
	while (c != 0)
	{
		count++;
		c /= 16;
	}
	return (count);
}
