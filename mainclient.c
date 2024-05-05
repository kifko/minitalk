/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainclient.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:23:15 by festeve-          #+#    #+#             */
/*   Updated: 2024/04/22 16:28:19 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;
	int	byte;

	byte = 0;
	if (argc < 3)
	{
		write(2, "Invalid arguments: ./client [pid] [message]\n", 45);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][byte])
	{
		signal_sender(pid, argv[2][byte]);
		byte++;
	}
	signal_sender(pid, '\n');
	return (0);
}
