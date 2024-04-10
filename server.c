/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:11:57 by mapichec          #+#    #+#             */
/*   Updated: 2024/04/05 18:11:07 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signal)
{
	static int	i = 8;
	static char	c = 0;

	if (i--)
	{
		if (signal == SIGUSR1)
			c = c | 1 << i;
	}
	if (i <= 0)
	{
		write(1, &c, 1);
		i = 8;
		c = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("\e[1;35mYou know this is a useful server\e[0;32m %d\n", pid);
	while (1)
	{
		if (signal(SIGUSR1, signal_handler) == SIG_ERR)
			return (0);
		else if (signal(SIGUSR2, signal_handler) == SIG_ERR)
			return (0);
	}
	return (0);
}
