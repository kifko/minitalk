/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:55:49 by festeve-          #+#    #+#             */
/*   Updated: 2024/04/22 16:58:43 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_sender(int pid, char signal_char)
{
	int	client_bit_index;

	client_bit_index = 0;
	while (client_bit_index < 8)
	{
		if ((signal_char & (0x01 << client_bit_index)) != 0)
		{
			kill (pid, SIGUSR1);
		}
		else
			kill (pid, SIGUSR2);
		usleep (100);
		client_bit_index++;
	}
}
