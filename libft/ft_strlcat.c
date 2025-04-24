/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:24:32 by leen              #+#    #+#             */
/*   Updated: 2025/01/07 21:13:47 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_length(char *x)
{
	size_t	i;

	i = 0;
	while (x[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	j = 0;
	src_len = get_length(src);
	dest_len = get_length(dest);
	if (size == 0 || size <= dest_len)
	{
		return (size + src_len);
	}
	i = dest_len;
	while (src[j] != '\0' && j < (size - dest_len - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
