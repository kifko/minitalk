/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:06:16 by festeve-          #+#    #+#             */
/*   Updated: 2024/04/22 15:14:25 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signal)
{
	static int	bit_index;
	static int	byte;

	if (signal == SIGUSR1)
		byte |= (0x01 << bit_index);
	bit_index++;
	if (bit_index == 8)
	{
		write(1, &byte, 1);
		bit_index = 0;
		byte = 0;
	}
}
