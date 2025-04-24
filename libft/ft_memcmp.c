/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:39:23 by leen              #+#    #+#             */
/*   Updated: 2025/01/07 20:52:59 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*x1;
	const unsigned char	*x2;

	i = 0;
	x1 = s1;
	x2 = s2;
	while (i < n)
	{
		if (x1[i] > x2[i])
		{
			return (x1[i] - x2[i]);
		}
		else if (x1[i] < x2[i])
		{
			return (x1[i] - x2[i]);
		}
		i++;
	}
	return (0);
}
