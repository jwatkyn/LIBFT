/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:03:33 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/21 14:27:33 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i])
		{
			if (s[i] == c && s[i + 1] != c && s[i + 1])
				count++;
			i++;
		}
	}
	return (count);
}

static char	*ft_makeword(char const *s, char c, int *i)
{
	int		j;
	int		k;
	char	*word;

	j = 0;
	k = 0;
	while (s[j] && s[j] != c)
		++j;
	*i = *i + j;
	word = ft_strnew(sizeof(char) * (j + 1));
	while (k < j)
	{
		word[k] = s[k];
		++k;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(words = (char**)malloc(sizeof(char*) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			words[j++] = ft_makeword(s, c, &i);
		}
		if (s[i] == c && s[1 + i] != c && s[i + 1] && s[i])
		{
			words[j++] = ft_makeword(s + i + 1, c, &i);
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}
