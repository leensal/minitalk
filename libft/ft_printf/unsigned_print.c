/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:05:16 by lsahloul          #+#    #+#             */
/*   Updated: 2025/02/27 17:05:18 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int number)
{
	int	digit_count;

	digit_count = 0;
	if (number > 9)
		digit_count += ft_print_unsigned((number / 10));
	digit_count += ft_print_character((number % 10) + 48);
	return (digit_count);
}
