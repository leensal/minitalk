/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:16:11 by lsahloul          #+#    #+#             */
/*   Updated: 2025/04/24 22:01:40 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft/libft.h"

void	handler(int sig)
{
	static char	byte;
	static int	bits_received;

	bits_received++;
	byte <<= 1;
	if (sig == SIGUSR1)
		byte |= 1;
	if (bits_received == 8)
	{
		write(1, &byte, 1);
		byte = 0;
		bits_received = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error: Wrong format \nTry ./server\n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID %d\n", pid);
	ft_printf("Waiting for Message...\n");
	while (argc == 1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (0);
}
