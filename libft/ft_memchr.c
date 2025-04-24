/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:15:04 by leen              #+#    #+#             */
/*   Updated: 2025/01/07 20:57:31 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d;
	int					i;

	d = s;
	i = 0;
	while (n != 0)
	{
		if ((unsigned char)c == d[i])
		{
			return ((void *)&d[i]);
		}
		n--;
		i++;
	}
	return (NULL);
}
