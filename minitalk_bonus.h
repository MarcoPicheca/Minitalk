/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:12:03 by mapichec          #+#    #+#             */
/*   Updated: 2024/04/09 10:23:52 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H
# include <signal.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

int		send_mess(int s_pid, char *str);
void	signal_handler(int signal);
int		ft_str_isdigit(char *str);

#endif
