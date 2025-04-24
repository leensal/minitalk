/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:52 by lsahloul          #+#    #+#             */
/*   Updated: 2025/02/27 17:04:54 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(int number, char specifier)
{
	char			*hexadecimal_base;
	unsigned int	hexa_number;
	int				i;

	if (specifier == 'x')
		hexadecimal_base = "0123456789abcdef";
	else
		hexadecimal_base = "0123456789ABCDEF";
	i = 0;
	hexa_number = (unsigned int)number;
	if (hexa_number > 15)
		i += ft_print_hexadecimal(hexa_number / 16, specifier);
	i += ft_print_character(hexadecimal_base[hexa_number % 16]);
	return (i);
}
