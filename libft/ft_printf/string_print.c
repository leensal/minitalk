/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:05:10 by lsahloul          #+#    #+#             */
/*   Updated: 2025/02/27 17:05:12 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char const *string)
{
	int	string_length;

	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	string_length = ft_strlen(string);
	write(1, string, string_length);
	return (string_length);
}
