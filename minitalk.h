/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:12:03 by mapichec          #+#    #+#             */
/*   Updated: 2024/04/05 17:39:25 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

int		send_mess(int s_pid, char *str);
void	signal_handler(int signal);
int		ft_str_isdigit(char *str);

#endif
