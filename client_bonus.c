/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:12:06 by mapichec          #+#    #+#             */
/*   Updated: 2024/04/09 10:32:50 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	send_mess(int s_pid, char *str)
{
	int	i;
	int	bit_count;

	i = 0;
	while (str[i] != '\0')
	{
		bit_count = 8;
		while (bit_count--)
		{
			if (str[i] >> bit_count & 1)
				kill(s_pid, SIGUSR1);
			else
				kill(s_pid, SIGUSR2);
			usleep(100);
		}
		i++;
	}
	return (1);
}

int	ft_str_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	s_pid;

	s_pid = 0;
	if (ac != 3)
		return (0);
	if (ft_str_isdigit(av[1]) == 1)
		return (0);
	s_pid = ft_atoi(av[1]);
	if (send_mess(s_pid, av[2]))
	{
		ft_printf("\e[1;37mMessage sent! \e[1;31mStill not sure where...\n");
		return (0);
	}
	return (0);
}
