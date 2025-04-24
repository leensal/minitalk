/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:05:04 by lsahloul          #+#    #+#             */
/*   Updated: 2025/02/27 17:05:06 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int number)
{
	int	i;

	i = 0;
	if (number == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (number < 0)
	{
		i += ft_print_character('-');
		number *= -1;
	}
	if (number > 9)
		i += ft_print_number(number / 10);
	i += ft_print_character((number % 10) + 48);
	return (i);
}
