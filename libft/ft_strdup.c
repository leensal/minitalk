/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:43:37 by leen              #+#    #+#             */
/*   Updated: 2025/01/07 21:12:38 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(ft_strlen((char *)s1) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	ft_strlcpy(ptr, s1, ft_strlen((char *)s1) + 1);
	return (ptr);
}
