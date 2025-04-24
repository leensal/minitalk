/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsahloul <lsahloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:01:43 by lsahloul          #+#    #+#             */
/*   Updated: 2025/04/24 20:45:28 by lsahloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c)
			|| (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	*ft_create_word(char const *s, char c, size_t k)
{
	size_t	save;
	char	*word;

	while (s[k] == c)
		k++;
	save = k;
	while (s[k] != c && s[k] != '\0')
		k++;
	word = ft_substr(s, save, k - save);
	return (word);
}

char	**ft_free_words(char **strlist, size_t i)
{
	while (i--)
		free(strlist[i]);
	free(strlist);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strlist = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!strlist)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		strlist[i] = ft_create_word(s, c, k);
		if (!strlist[i])
			return (ft_free_words(strlist, i));
		while (s[k] != c && s[k] != '\0')
			k++;
		i++;
	}
	strlist[i] = NULL;
	return (strlist);
}
