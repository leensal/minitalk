/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:27 by lsahloul          #+#    #+#             */
/*   Updated: 2025/02/27 17:04:29 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_character(int character)
{
	write(1, &character, 1);
	return (1);
}
