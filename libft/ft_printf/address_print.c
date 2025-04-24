/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:20 by lsahloul          #+#    #+#             */
/*   Updated: 2025/02/27 17:04:22 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_address(unsigned long int number)
{
	char	*hexa_lower_base;
	int		i;

	hexa_lower_base = "0123456789abcdef";
	i = 0;
	if (number > 15)
		i += print_address(number / 16);
	i += ft_print_character(hexa_lower_base[number % 16]);
	return (i);
}

int	ft_print_address(void *variable)
{
	unsigned long int	number;
	int					len;

	number = (unsigned long int)variable;
	len = 0;
	len += ft_print_string("0x");
	len += print_address(number);
	return (len);
}
