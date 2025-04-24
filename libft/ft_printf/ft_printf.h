/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:40 by lsahloul          #+#    #+#             */
/*   Updated: 2025/04/24 21:21:26 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include "../includes.h"

int		ft_print_address(void *variable);
int		ft_print_character(int character);
int		ft_print_hexadecimal(int number, char specifier);
int		ft_print_number(int number);
int		ft_printf(const char *string, ...);
int		ft_print_string(char const *string);
int		ft_print_unsigned(unsigned int number);

#endif
