/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caratteri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpicheca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:15:14 by mpicheca          #+#    #+#             */
/*   Updated: 2023/02/27 16:36:38 by mpicheca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (c)
	{
		while (c[i] != '\0')
			len += write(1, &c[i++], 1);
	}
	else
		return (len += write(1, "(null)", 6));
	return (len);
}
